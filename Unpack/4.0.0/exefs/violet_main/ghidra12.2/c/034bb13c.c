/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034bb13c; name: FUN_034bb13c
 */


void FUN_034bb13c(long param_1,byte *param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  
  bVar2 = *param_2;
  if (((bVar2 == 0xff) && (param_2[8] == 0xff)) && (*(long *)(param_2 + 0x10) == 0)) {
    if (*(char *)(param_1 + 0xc) != '\0') {
      *(undefined1 *)(param_1 + 0xc) = 0;
    }
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x18);
    if (uVar5 != 0) {
      lVar9 = *(long *)(param_1 + 0x10);
      iVar6 = 0;
      do {
        iVar1 = iVar6 + (uVar5 >> 1);
        lVar10 = (long)iVar1;
        bVar3 = *(byte *)(lVar9 + (long)iVar1 * 0x28 + 0x20);
        if (bVar3 == bVar2) {
          lVar7 = lVar9 + lVar10 * 0x28;
          FUN_034bb25c(lVar7,param_2 + 8);
          if (*(char *)(lVar7 + 0xc) != '\0') {
            return;
          }
          piVar4 = (int *)(lVar9 + lVar10 * 0x28 + 0x18);
          if (*piVar4 != 0) {
            return;
          }
          plVar8 = (long *)(lVar9 + lVar10 * 0x28 + 0x10);
          if (*plVar8 != 0) {
            *piVar4 = 0;
            (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
            *plVar8 = 0;
            *(undefined4 *)(lVar9 + lVar10 * 0x28 + 0x1c) = 0;
          }
          FUN_034baca4((long *)(param_1 + 0x10),*param_2);
          return;
        }
        if (bVar3 < bVar2) {
          iVar6 = iVar1 + 1;
        }
        uVar5 = uVar5 - (bVar3 < bVar2) >> 1;
      } while (uVar5 != 0);
    }
  }
  return;
}


