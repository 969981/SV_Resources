/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01063644; name: FUN_01063644
 */


void FUN_01063644(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(*(long *)(param_2 + 0x48) + param_3 * 0x38);
  puVar2 = (undefined8 *)(lVar5 + param_4 * 0x68);
  uVar4 = puVar2[1];
  *param_1 = *puVar2;
  param_1[1] = uVar4;
  plVar1 = (long *)puVar2[3];
  param_1[2] = puVar2[2];
  param_1[3] = plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  lVar3 = lVar5 + param_4 * 0x68;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(lVar3 + 0x20);
  uVar4 = *(undefined8 *)(lVar3 + 0x30);
  param_1[5] = *(undefined8 *)(lVar3 + 0x28);
  param_1[6] = uVar4;
  plVar1 = *(long **)(lVar3 + 0x40);
  param_1[7] = *(undefined8 *)(lVar3 + 0x38);
  param_1[8] = plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  lVar3 = lVar5 + param_4 * 0x68;
  uVar4 = *(undefined8 *)(lVar3 + 0x48);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(lVar3 + 0x50);
  param_1[9] = uVar4;
  plVar1 = *(long **)(lVar3 + 0x58);
  param_1[0xb] = plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  plVar1 = *(long **)(lVar5 + param_4 * 0x68 + 0x60);
  param_1[0xc] = plVar1;
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01063734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))();
  return;
}


