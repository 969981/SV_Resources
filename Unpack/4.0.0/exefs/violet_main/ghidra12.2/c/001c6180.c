/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001c6180; name: FUN_001c6180
 */


int FUN_001c6180(long param_1,int param_2,int param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  lVar1 = param_1 + (long)param_3 * 4;
  iVar2 = *(int *)(lVar1 + 0x260);
  *(undefined4 *)(lVar1 + 0x260) = 0xffffffff;
  if (param_2 == 0) {
    plVar7 = (long *)(param_1 + (long)param_3 * 8 + 0x78);
    lVar5 = *plVar7;
    if ((lVar5 != 0) && (lVar6 = *(long *)(lVar5 + 0x28), lVar6 != 0)) {
      iVar3 = *(int *)(lVar5 + 4);
      do {
        if (*(long *)(param_1 + ((long)param_3 ^ 1U) * 8 + 0x78) != 0) {
          while (*(int *)(lVar6 + 4) != iVar3) {
            lVar6 = *(long *)(lVar6 + 0x28);
            if (lVar6 == 0) goto LAB_001c61b0;
          }
        }
        iVar4 = FUN_001c6470(param_1,lVar6,lVar1 + 0x260);
        if (iVar4 != 7) {
          *plVar7 = lVar6;
          break;
        }
        lVar6 = *(long *)(lVar6 + 0x28);
      } while (lVar6 != 0);
      goto LAB_001c61b4;
    }
  }
LAB_001c61b0:
  iVar4 = 7;
LAB_001c61b4:
  if (iVar2 != -1) {
    FUN_001c62cc(param_1,iVar2);
  }
  return iVar4;
}


