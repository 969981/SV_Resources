/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00818dd0; name: FUN_00818dd0
 */


undefined8 FUN_00818dd0(int param_1,char *param_2,void *param_3)

{
  undefined8 uVar1;
  
  if (param_1 == 2) {
    uVar1 = nn::socket::InetPton(2,param_2,param_3);
    return uVar1;
  }
  return 0xffffffff;
}


