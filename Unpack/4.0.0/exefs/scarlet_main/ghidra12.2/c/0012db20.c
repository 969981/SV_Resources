/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0012db20; name: FUN_0012db20
 */


ulong FUN_0012db20(undefined8 param_1,undefined4 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  
  uVar1 = 0;
  switch(param_2) {
  case 0:
    return param_4 + param_3;
  case 1:
    return param_3 - param_4;
  case 2:
    return param_4 * param_3;
  case 3:
    uVar1 = FUN_00140f60(param_1,param_3,param_4);
    return uVar1;
  case 6:
    uVar1 = FUN_00140f10(param_1,param_3,param_4);
    return uVar1;
  case 7:
    return param_4 & param_3;
  case 8:
    return param_4 | param_3;
  case 9:
    return param_4 ^ param_3;
  case 10:
    uVar1 = FUN_00141000(param_3,param_4);
    return uVar1;
  case 0xb:
    uVar1 = FUN_00141000(param_3,-param_4);
    return uVar1;
  case 0xc:
    return -param_3;
  case 0xd:
    uVar1 = ~param_3;
  }
  return uVar1;
}


