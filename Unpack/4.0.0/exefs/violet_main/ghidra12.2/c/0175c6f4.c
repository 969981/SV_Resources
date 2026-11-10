/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0175c6f4; name: FUN_0175c6f4
 */


void FUN_0175c6f4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  uVar1 = (**(code **)(*plVar3 + 0xf8))(plVar3);
  if ((uVar1 & 1) != 0) {
    lVar2 = FUN_00c4e600();
    if (0 < *(int *)(lVar2 + 0x12c8)) {
      FUN_00c48fe8(plVar3,param_2,param_3 * 0x90,0x10);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0175c74c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x18))(plVar3,param_2,param_3 * 0x90,0x10);
  return;
}


