/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0341d4ac; name: FUN_0341d4ac
 */


bool FUN_0341d4ac(long param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  if (param_2 != (undefined4 *)0x0) {
    uVar2 = *(uint *)(*(long *)(param_2 + 0xe) + 0x38);
    if (uVar2 != 0) {
      plVar5 = *(long **)(*(long *)(param_2 + 0xe) + 0x30);
      lVar6 = (ulong)uVar2 << 3;
      lVar7 = lVar6;
      plVar8 = plVar5;
      do {
        if (*plVar8 == *(long *)(param_1 + 0xe0)) goto LAB_0341d614;
        lVar7 = lVar7 + -8;
        plVar8 = plVar8 + 1;
      } while (lVar7 != 0);
      do {
        if (*plVar5 == *(long *)(param_1 + 0xe8)) goto LAB_0341d614;
        lVar6 = lVar6 + -8;
        plVar5 = plVar5 + 1;
      } while (lVar6 != 0);
    }
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0xf8) * 4) = *param_2;
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0xf8) * 4 + 0x10) = param_2[1];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0xf8) * 4 + 0x20) = param_2[2];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0xf8) * 4 + 0x30) = param_2[3];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0xf8) * 4 + 0x40) = param_2[4];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0xf8) * 4 + 0x50) = param_2[5];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0xf8) * 4 + 0x60) = param_2[6];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0xf8) * 4 + 0x70) = param_2[7];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0xf8) * 4 + 0x80) = param_2[8];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0xf8) * 4 + 0x90) = param_2[9];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0xf8) * 4 + 0xa0) = param_2[10];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0xf8) * 4 + 0xb0) = param_2[0xb];
    iVar1 = *(uint *)(param_1 + 0xf8) + 1;
    *(long *)(param_1 + (ulong)*(uint *)(param_1 + 0xf8) * 8 + 0x100) =
         *(long *)(param_2 + 0xe) + 0x20;
    *(int *)(param_1 + 0xf8) = iVar1;
    if (iVar1 == 4) {
      uVar4 = FUN_0341d62c(param_1);
      if ((uVar4 & 1) == 0) {
        bVar3 = *(char *)(param_1 + 0x120) != '\0';
      }
      else {
        bVar3 = true;
      }
      *(bool *)(param_1 + 0x120) = bVar3;
      *(undefined4 *)(param_1 + 0xf8) = 0;
    }
  }
LAB_0341d614:
  return *(char *)(param_1 + 0x120) == '\0';
}


