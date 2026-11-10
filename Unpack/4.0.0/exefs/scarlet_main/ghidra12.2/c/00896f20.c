/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00896f20; name: FUN_00896f20
 */


void FUN_00896f20(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  undefined4 uVar11;
  
  lVar3 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(lVar3 + 8);
  if (lVar3 != lVar6) {
    do {
      lVar7 = *(long *)(lVar6 + 8);
      if (0 < *(int *)(lVar6 + 0x48)) {
        lVar3 = *(long *)(lVar6 + 0x10);
        iVar8 = 0;
        iVar9 = 1;
        do {
          lVar4 = *(long *)(lVar6 + 0x40);
          if (lVar6 + 0x38 != lVar4) {
            iVar5 = iVar9;
            do {
              iVar5 = iVar5 + -1;
              if (iVar5 == 0) {
                plVar10 = (long *)(lVar4 + -0x20);
                goto LAB_00896fd4;
              }
              lVar4 = *(long *)(lVar4 + 8);
            } while (lVar6 + 0x38 != lVar4);
          }
          plVar10 = (long *)0x0;
LAB_00896fd4:
          lVar4 = (**(code **)(**(long **)(lVar3 + 0x18) + 0x78))
                            (*(long **)(lVar3 + 0x18),plVar10[3],1);
          lVar1 = *plVar10;
          if (*(long *)(lVar1 + 0x38) == 0) {
            if (plVar10[1] == 0) {
              if (plVar10[2] != 0) {
                FUN_00896374(lVar1,param_2,lVar3,plVar10[2],lVar4);
              }
            }
            else {
              FUN_00896158(lVar1,param_2,lVar3,plVar10[1],lVar4,*(undefined1 *)(lVar6 + 100));
              if (*(char *)(lVar6 + 0x65) != '\0') {
                *(ushort *)(*plVar10 + 0x60) = *(ushort *)(*plVar10 + 0x60) & 0xfffb;
                *(ushort *)(*plVar10 + 0x60) = *(ushort *)(*plVar10 + 0x60) & 0xfffd;
              }
            }
          }
          if ((*(byte *)(lVar4 + 0x62) >> 1 & 1) != 0) {
            uVar11 = *(undefined4 *)(*plVar10 + 0x28);
            uVar2 = FUN_008a8338(lVar4);
            FUN_008ac944(uVar11,uVar2,param_2,lVar3);
          }
          iVar8 = iVar8 + 1;
          iVar9 = iVar9 + 1;
        } while (iVar8 < *(int *)(lVar6 + 0x48));
        lVar3 = *(long *)(param_1 + 0x10);
      }
      lVar6 = lVar7;
    } while (lVar3 != lVar7);
  }
  return;
}


