/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007b2c38; name: FUN_007b2c38
 */


void FUN_007b2c38(long param_1)

{
  FUN_007a0984();
  nn::socket::InetHtonl(*(uint *)(param_1 + 0x1260));
  nn::socket::InetHtonl(*(uint *)(param_1 + 0x126c));
  nn::socket::InetHtonl(*(uint *)(param_1 + 0x1278));
  nn::socket::InetHtonl(*(uint *)(param_1 + 0x1284));
  nn::socket::InetHtonl(*(uint *)(param_1 + 0x1290));
  nn::socket::InetHtonl(*(uint *)(param_1 + 0x129c));
  nn::socket::InetHtonl(*(uint *)(param_1 + 0x12a8));
  nn::socket::InetHtonl(*(uint *)(param_1 + 0x12b4));
  return;
}


