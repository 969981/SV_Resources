/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0025c1ac; name: FUN_0025c1ac
 */


int FUN_0025c1ac(undefined8 param_1,int *param_2)

{
  long *plVar1;
  short sVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  uint local_80;
  undefined1 uStack_7c;
  short sStack_7b;
  undefined1 uStack_79;
  undefined1 uStack_78;
  char cStack_77;
  undefined6 uStack_76;
  long *local_70;
  long *local_68;
  
  iVar3 = 0x80341;
  if (*param_2 == 5) {
    plVar8 = *(long **)(param_2 + 8);
    plVar1 = (long *)(param_2 + 10);
    if (plVar8 != plVar1) {
LAB_0025c20c:
      do {
        FUN_0025c510(&local_80,plVar8 + 4);
        if ((local_80 & 1) == 0) {
          if ((local_80 & 0xfe) != 0xc) {
            return 0x80341;
          }
          if (CONCAT13(uStack_7c,local_80._1_3_) != 0x616e6574 || sStack_7b != 0x746e) {
            return 0x80341;
          }
        }
        else {
          if (CONCAT62(uStack_76,CONCAT11(cStack_77,uStack_78)) != 6) {
LAB_0025c4c8:
            (**(code **)(*local_68 + 0x18))
                      (local_68,local_70,
                       CONCAT17(uStack_79,CONCAT25(sStack_7b,CONCAT14(uStack_7c,local_80))) &
                       0xfffffffffffffffe,1);
            return 0x80341;
          }
          lVar6 = *local_70;
          sVar2 = *(short *)((long)local_70 + 4);
          (**(code **)(*local_68 + 0x18))
                    (local_68,local_70,
                     CONCAT17(uStack_79,CONCAT25(sStack_7b,CONCAT14(uStack_7c,local_80))) &
                     0xfffffffffffffffe,1);
          if ((int)lVar6 != 0x616e6574 || sVar2 != 0x746e) {
            return 0x80341;
          }
        }
        if ((int)plVar8[7] != 5) {
          return 0x80341;
        }
        plVar7 = (long *)plVar8[0xb];
        while (plVar7 != plVar8 + 0xc) {
          FUN_0025c510(&local_80,plVar7 + 4);
          if ((local_80 & 1) == 0) {
            if (((local_80 & 0xfe) != 0x12) ||
               (CONCAT17(uStack_78,
                         CONCAT16(uStack_79,CONCAT24(sStack_7b,CONCAT13(uStack_7c,local_80._1_3_))))
                != 0x656469727265766f || cStack_77 != 's')) goto LAB_0025c37c;
LAB_0025c34c:
            iVar3 = FUN_0025c728(param_1,plVar7 + 7);
          }
          else {
            if (CONCAT62(uStack_76,CONCAT11(cStack_77,uStack_78)) == 9) {
              lVar4 = *local_70;
              lVar6 = local_70[1];
              (**(code **)(*local_68 + 0x18))
                        (local_68,local_70,
                         CONCAT17(uStack_79,CONCAT25(sStack_7b,CONCAT14(uStack_7c,local_80))) &
                         0xfffffffffffffffe,1);
              if (lVar4 == 0x656469727265766f && (char)lVar6 == 's') goto LAB_0025c34c;
            }
            else {
              (**(code **)(*local_68 + 0x18))
                        (local_68,local_70,
                         CONCAT17(uStack_79,CONCAT25(sStack_7b,CONCAT14(uStack_7c,local_80))) &
                         0xfffffffffffffffe,1);
            }
LAB_0025c37c:
            FUN_0025c510(&local_80,plVar7 + 4);
            if ((local_80 & 1) == 0) {
              if ((local_80 & 0xfe) != 0xe) {
                return 0x80341;
              }
              if (CONCAT13(uStack_7c,local_80._1_3_) != 0x6d726570 ||
                  CONCAT13(uStack_79,CONCAT21(sStack_7b,uStack_7c)) != 0x7374696d) {
                return 0x80341;
              }
            }
            else {
              if (CONCAT62(uStack_76,CONCAT11(cStack_77,uStack_78)) != 7) goto LAB_0025c4c8;
              lVar6 = *local_70;
              iVar3 = *(int *)((long)local_70 + 3);
              (**(code **)(*local_68 + 0x18))
                        (local_68,local_70,
                         CONCAT17(uStack_79,CONCAT25(sStack_7b,CONCAT14(uStack_7c,local_80))) &
                         0xfffffffffffffffe,1);
              if ((int)lVar6 != 0x6d726570 || iVar3 != 0x7374696d) {
                return 0x80341;
              }
            }
            iVar3 = FUN_0025c9b0(param_1,plVar7 + 7);
          }
          if (iVar3 != 0) {
            return iVar3;
          }
          plVar5 = (long *)plVar7[1];
          if ((long *)plVar7[1] == (long *)0x0) {
            plVar5 = plVar7 + 2;
            if (*(long **)*plVar5 == plVar7) {
              plVar7 = (long *)*plVar5;
            }
            else {
              do {
                lVar6 = *plVar5;
                plVar5 = (long *)(lVar6 + 0x10);
                plVar7 = (long *)*plVar5;
              } while (*plVar7 != lVar6);
            }
          }
          else {
            do {
              plVar7 = plVar5;
              plVar5 = (long *)*plVar7;
            } while ((long *)*plVar7 != (long *)0x0);
          }
        }
        plVar7 = (long *)plVar8[1];
        if ((long *)plVar8[1] != (long *)0x0) {
          do {
            plVar8 = plVar7;
            plVar7 = (long *)*plVar8;
          } while ((long *)*plVar8 != (long *)0x0);
LAB_0025c49c:
          if (plVar8 == plVar1) {
            return 0;
          }
          goto LAB_0025c20c;
        }
        plVar7 = plVar8 + 2;
        plVar5 = (long *)*plVar7;
        if ((long *)*plVar5 != plVar8) {
          do {
            lVar6 = *plVar7;
            plVar7 = (long *)(lVar6 + 0x10);
            plVar8 = (long *)*plVar7;
          } while (*plVar8 != lVar6);
          goto LAB_0025c49c;
        }
        plVar8 = plVar5;
        if (plVar5 == plVar1) {
          return 0;
        }
      } while( true );
    }
    iVar3 = 0;
  }
  return iVar3;
}


