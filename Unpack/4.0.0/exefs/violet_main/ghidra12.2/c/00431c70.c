/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00431c70; name: FUN_00431c70
 */


undefined8 FUN_00431c70(long param_1,int param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0xffffffff;
  if ((param_1 != 0) && (param_3 != 0)) {
    if ((param_2 != 0x80) && ((param_2 != 0x100 && (param_2 != 0xc0)))) {
      return 0xfffffffe;
    }
    uVar1 = FUN_00431cf0(param_2,param_1,param_3);
    uVar2 = 0;
    *(undefined4 *)(param_3 + 0x110) = uVar1;
  }
  return uVar2;
}


