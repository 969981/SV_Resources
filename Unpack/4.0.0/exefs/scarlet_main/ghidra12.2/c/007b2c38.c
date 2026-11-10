/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


