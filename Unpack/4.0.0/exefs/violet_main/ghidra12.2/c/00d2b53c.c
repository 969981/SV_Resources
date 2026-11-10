/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d2b53c; name: FUN_00d2b53c
 */


void FUN_00d2b53c(long param_1,long *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  
  if (*(long *)(param_1 + 0x80) != 0) {
    if ((*(byte *)(*(long *)(param_1 + 0x80) + 0x1e8) & 1) != 0) {
      uVar1 = FUN_00d2b918(*(undefined8 *)(param_1 + 0x80),
                           *(undefined8 *)(*(long *)(param_1 + 0x58) + 0x1f0));
      goto LAB_00d2b57c;
    }
  }
  uVar1 = 0;
LAB_00d2b57c:
  plVar2 = (long *)FUN_00d2b5d0(uVar1,param_3);
  if ((plVar2 == (long *)0x0) || (uVar3 = (**(code **)(*plVar2 + 0x28))(), (uVar3 & 1) == 0)) {
    *param_2 = *param_2 + 1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00d2b5b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,param_2);
  return;
}


