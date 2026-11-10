/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004b393c; name: FUN_004b393c
 */


void FUN_004b393c(long *param_1,long param_2)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  byte local_98 [16];
  undefined8 local_88;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  
  if (param_1[0x11] != 0) {
    lVar3 = FUN_004c4c58(*param_1 + 0x30,*(undefined8 *)(param_2 + 0xb0));
    puVar1 = PTR_LAB_047cba48;
    if (*param_1 + 0x38 == lVar3) {
      bVar2 = false;
      plVar7 = (long *)param_1[0xf];
      if (plVar7 == param_1 + 0x10) {
        return;
      }
    }
    else {
      bVar2 = *(char *)(lVar3 + 0x38) != '\0';
      plVar7 = (long *)param_1[0xf];
      if (plVar7 == param_1 + 0x10) {
        return;
      }
    }
    if (bVar2) {
      do {
        FUN_004a8ec0(local_98,"Import ",*(undefined8 *)plVar7[4]);
                    /* try { // try from 004b3a0c to 004b3a1b has its CatchHandler @ 004b3c0c */
        puVar4 = (ulong *)FUN_0021d540(local_98," is unused.",0xb);
        uStack_78 = puVar4[1];
        local_80 = *puVar4;
        local_70 = puVar4[2];
        puVar4[1] = 0;
        puVar4[2] = 0;
        *puVar4 = 0;
        if ((local_98[0] & 1) != 0) {
          FUN_0049e790(puVar1,local_88);
        }
        plVar5 = (long *)param_1[2];
        if (plVar5 != (long *)0x0) {
                    /* try { // try from 004b3a60 to 004b3a73 has its CatchHandler @ 004b3bf4 */
          (**(code **)(*plVar5 + 0x10))
                    (plVar5,param_1 + 7,*(undefined8 *)plVar7[4],param_2,9,&local_80);
        }
        *(undefined1 *)(param_1 + 6) = 1;
        if ((local_80 & 1) != 0) {
          FUN_0049e790(puVar1,local_70);
        }
        plVar5 = (long *)plVar7[1];
        if ((long *)plVar7[1] == (long *)0x0) {
          plVar5 = plVar7 + 2;
          plVar6 = (long *)*plVar5;
          if ((long *)*plVar6 != plVar7) {
            do {
              lVar3 = *plVar5;
              plVar5 = (long *)(lVar3 + 0x10);
              plVar6 = (long *)*plVar5;
            } while (*plVar6 != lVar3);
          }
        }
        else {
          do {
            plVar6 = plVar5;
            plVar5 = (long *)*plVar6;
          } while ((long *)*plVar6 != (long *)0x0);
        }
        plVar7 = plVar6;
      } while (plVar6 != param_1 + 0x10);
    }
    else {
      do {
        FUN_004a8ec0(local_98,"Import ",*(undefined8 *)plVar7[4]);
                    /* try { // try from 004b3b0c to 004b3b1b has its CatchHandler @ 004b3c08 */
        puVar4 = (ulong *)FUN_0021d540(local_98," is unused.",0xb);
        uStack_78 = puVar4[1];
        local_80 = *puVar4;
        local_70 = puVar4[2];
        puVar4[1] = 0;
        puVar4[2] = 0;
        *puVar4 = 0;
        if ((local_98[0] & 1) != 0) {
          FUN_0049e790(puVar1,local_88);
        }
        plVar5 = (long *)param_1[2];
        if (plVar5 != (long *)0x0) {
                    /* try { // try from 004b3b60 to 004b3b73 has its CatchHandler @ 004b3bf0 */
          (**(code **)(*plVar5 + 0x18))
                    (plVar5,param_1 + 7,*(undefined8 *)plVar7[4],param_2,9,&local_80);
        }
        if ((local_80 & 1) != 0) {
          FUN_0049e790(puVar1,local_70);
        }
        plVar5 = (long *)plVar7[1];
        if ((long *)plVar7[1] == (long *)0x0) {
          plVar5 = plVar7 + 2;
          plVar6 = (long *)*plVar5;
          if ((long *)*plVar6 != plVar7) {
            do {
              lVar3 = *plVar5;
              plVar5 = (long *)(lVar3 + 0x10);
              plVar6 = (long *)*plVar5;
            } while (*plVar6 != lVar3);
          }
        }
        else {
          do {
            plVar6 = plVar5;
            plVar5 = (long *)*plVar6;
          } while ((long *)*plVar6 != (long *)0x0);
        }
        plVar7 = plVar6;
      } while (plVar6 != param_1 + 0x10);
    }
  }
  return;
}


