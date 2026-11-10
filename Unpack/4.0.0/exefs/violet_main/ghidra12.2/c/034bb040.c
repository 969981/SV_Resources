/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034bb040; name: FUN_034bb040
 */


void FUN_034bb040(long param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  
  uVar2 = *param_2;
  if ((((uVar2 == 0) && ((char)param_2[2] == -1)) && ((char)param_2[4] == -1)) &&
     (*(long *)(param_2 + 6) == 0)) {
    if (*(char *)(param_1 + 0xc) != '\0') {
      *(undefined1 *)(param_1 + 0xc) = 0;
    }
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x18);
    if (uVar4 != 0) {
      lVar7 = *(long *)(param_1 + 0x10);
      iVar5 = 0;
      do {
        iVar1 = iVar5 + (uVar4 >> 1);
        uVar3 = *(uint *)(lVar7 + (long)iVar1 * 0x28 + 0x20);
        if (uVar3 == uVar2) {
          lVar6 = lVar7 + (long)iVar1 * 0x28;
          FUN_034bb13c(lVar6,param_2 + 2);
          if (*(char *)(lVar6 + 0xc) != '\0') {
            return;
          }
          if (*(int *)(lVar7 + (long)iVar1 * 0x28 + 0x18) == 0) {
            FUN_034ba5a0(lVar6);
            FUN_034ba6ec((long *)(param_1 + 0x10),*param_2);
            return;
          }
          return;
        }
        if (uVar3 < uVar2) {
          iVar5 = iVar1 + 1;
        }
        uVar4 = uVar4 - (uVar3 < uVar2) >> 1;
      } while (uVar4 != 0);
    }
  }
  return;
}


