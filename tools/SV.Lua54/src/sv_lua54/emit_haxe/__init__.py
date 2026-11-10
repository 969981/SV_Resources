"""Evidence-gated Lua 5.4 CFG/HIR/AST -> Haxe emitter.

The restricted v0 backend accepts only proven one-block constant returns;
every unsupported instruction or capture must fail closed.
"""
from .restricted import LiftFailure, lift_constant_return, render_class

__all__ = ["LiftFailure", "lift_constant_return", "render_class"]
