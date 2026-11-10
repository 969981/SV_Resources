/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034b4d58; name: FUN_034b4d58
 */


void FUN_034b4d58(long param_1,ulong *param_2)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  uVar2 = *param_2;
  if ((((uVar2 == 0) && ((int)param_2[1] == 0)) && ((int)param_2[2] == 0)) &&
     ((((char)param_2[3] == -1 && ((char)param_2[4] == -1)) && (param_2[5] == 0)))) {
    if (*(char *)(param_1 + 0xc) != '\0') {
      *(undefined1 *)(param_1 + 0xc) = 0;
    }
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x18);
    if (uVar3 != 0) {
      lVar7 = *(long *)(param_1 + 0x10);
      iVar4 = 0;
      do {
        iVar1 = iVar4 + (uVar3 >> 1);
        uVar5 = *(ulong *)(lVar7 + (long)iVar1 * 0x28 + 0x20);
        if (uVar5 == uVar2) {
          lVar6 = lVar7 + (long)iVar1 * 0x28;
          FUN_034baf0c(lVar6,param_2 + 1);
          if (*(char *)(lVar6 + 0xc) != '\0') {
            return;
          }
          if (*(int *)(lVar7 + (long)iVar1 * 0x28 + 0x18) == 0) {
            FUN_034b9cd0(lVar6);
            FUN_034b9e0c((long *)(param_1 + 0x10),*param_2);
            return;
          }
          return;
        }
        if (uVar5 < uVar2) {
          iVar4 = iVar1 + 1;
        }
        uVar3 = uVar3 - (uVar5 < uVar2) >> 1;
      } while (uVar3 != 0);
    }
  }
  return;
}


