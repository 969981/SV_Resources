/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034baf0c; name: FUN_034baf0c
 */


void FUN_034baf0c(long param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  
  uVar2 = *param_2;
  if ((((uVar2 == 0) && (param_2[2] == 0)) && ((char)param_2[4] == -1)) &&
     (((char)param_2[6] == -1 && (*(long *)(param_2 + 8) == 0)))) {
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
        uVar3 = *(uint *)(lVar9 + (long)iVar1 * 0x28 + 0x20);
        if (uVar3 == uVar2) {
          lVar7 = lVar9 + lVar10 * 0x28;
          FUN_034bb040(lVar7,param_2 + 2);
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
          FUN_034ba22c((long *)(param_1 + 0x10),*param_2);
          return;
        }
        if (uVar3 < uVar2) {
          iVar6 = iVar1 + 1;
        }
        uVar5 = uVar5 - (uVar3 < uVar2) >> 1;
      } while (uVar5 != 0);
    }
  }
  return;
}


