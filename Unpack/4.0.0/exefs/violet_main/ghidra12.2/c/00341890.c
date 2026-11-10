/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00341890; name: FUN_00341890
 */


void FUN_00341890(char *param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x10);
  if (*param_1 != '\0') {
    FUN_00341dc0(param_1);
    FUN_003504e0(*(undefined8 *)(lVar1 + 8),"done scheduling deadline timer");
    return;
  }
  *param_1 = '\x01';
  uVar2 = *(undefined8 *)(lVar1 + 8);
  if (4 < param_2) {
    param_2 = FUN_00350fb0(param_2);
  }
  FUN_003504a8(uVar2,param_1 + 0x18,param_2,"scheduling deadline timer");
  return;
}


