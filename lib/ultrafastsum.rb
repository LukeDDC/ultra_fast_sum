require "ultrafastsum/version"
require 'soma_c'
module Ultrafastsum
  class Error < StandardError; end
  extend SOMA_C

  def self.sum(a, b)
    soma_c(a, b)
  end
end
