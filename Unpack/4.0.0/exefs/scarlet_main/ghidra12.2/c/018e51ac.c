/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018e51ac; name: FUN_018e51ac
 */


void FUN_018e51ac(undefined1 *param_1,long param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  undefined1 *puVar3;
  ulong uVar4;
  
  lVar1 = FUN_018e5288(param_2,*param_4);
  if ((((*(long *)(lVar1 + 0xd8) != 0) && (*(short *)(*(long *)(lVar1 + 0xd8) + 0x1a) != 0)) ||
      (uVar4 = FUN_01473a8c(lVar1 + 0xc0), (uVar4 & 1) != 0)) && (*(long *)(lVar1 + 0xd0) != 0)) {
    lVar1 = FUN_018e5288(param_2,*param_4);
    if ((((*(long *)(lVar1 + 0x88) != 0) && (*(short *)(*(long *)(lVar1 + 0x88) + 0x1a) != 0)) ||
        (uVar4 = FUN_013f7d04(lVar1 + 0x70), (uVar4 & 1) != 0)) && (*(long *)(lVar1 + 0x80) != 0)) {
      plVar2 = (long *)FUN_015a8a54();
      if (*plVar2 != 0) {
        FUN_015214ac(*plVar2,*(int *)(*param_4 + (ulong)*(uint *)(param_2 + 0xe8)) + 0x26,0);
        puVar3 = (undefined1 *)FUN_015c0588();
        goto LAB_018e524c;
      }
    }
  }
  puVar3 = (undefined1 *)FUN_00f6866c();
LAB_018e524c:
  *param_1 = *puVar3;
  return;
}


