/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0024aaa0; name: FUN_0024aaa0
 */


void FUN_0024aaa0(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  byte *pbVar2;
  ulong uVar3;
  size_t __n;
  void *__s1;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  void *__s2;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long local_70;
  long lStack_68;
  
  if (((long *)param_1[2] == (long *)param_2[2]) ||
     (uVar6 = (**(code **)(*(long *)param_1[2] + 0x20))(), (uVar6 & 1) != 0)) {
    plVar12 = param_1 + 1;
    FUN_01cfa44c(param_1,*plVar12);
    *param_1 = *param_2;
    lVar9 = param_2[1];
    *plVar12 = lVar9;
    lVar11 = param_2[3];
    param_1[3] = lVar11;
    if (lVar11 == 0) {
      *param_1 = (long)plVar12;
      return;
    }
    *(long **)(lVar9 + 0x10) = plVar12;
    param_2[3] = 0;
    *param_2 = (long)(param_2 + 1);
    param_2[1] = 0;
    return;
  }
  plVar12 = param_1 + 1;
  if (param_1[3] != 0) {
    puVar13 = (undefined8 *)*param_1;
    *param_1 = (long)plVar12;
    *(undefined8 *)(param_1[1] + 0x10) = 0;
    param_1[1] = 0;
    param_1[3] = 0;
    puVar10 = (undefined8 *)puVar13[1];
    if (puVar10 != (undefined8 *)0x0) {
      puVar13 = puVar10;
    }
    if (puVar13 == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)0x0;
    }
    else {
      puVar10 = (undefined8 *)puVar13[2];
      if (puVar10 == (undefined8 *)0x0) {
LAB_0024acd4:
        puVar7 = puVar10;
        puVar10 = puVar7;
        if (param_2[3] != 0) {
          lVar11 = *param_2;
          lVar9 = *(long *)(lVar11 + 8);
          if (lVar9 == 0) {
            lVar9 = *(long *)(lVar11 + 0x10);
          }
          *param_2 = lVar9;
          param_2[3] = param_2[3] + -1;
          FUN_01336080(param_2[1],lVar11);
          puVar1 = (undefined8 *)(lVar11 + 0x20);
          pbVar2 = (byte *)(puVar13 + 4);
          if (((long *)puVar13[7] == *(long **)(lVar11 + 0x38)) ||
             (uVar6 = (**(code **)(*(long *)puVar13[7] + 0x20))(), (uVar6 & 1) != 0)) {
            if ((*pbVar2 & 1) != 0) {
              (**(code **)(*(long *)puVar13[7] + 0x18))
                        ((long *)puVar13[7],puVar13[6],puVar13[4] & 0xfffffffffffffffe,1);
              *(undefined2 *)(puVar13 + 4) = 0;
            }
            uVar16 = *(undefined8 *)(lVar11 + 0x28);
            uVar15 = *puVar1;
            puVar13[6] = *(undefined8 *)(lVar11 + 0x30);
            puVar13[5] = uVar16;
            *(undefined8 *)pbVar2 = uVar15;
            *(undefined2 *)puVar1 = 0;
          }
          else {
                    /* try { // try from 0024ad70 to 0024ad7b has its CatchHandler @ 0024af98 */
            FUN_01d0e1a8(pbVar2,puVar1);
          }
          pbVar2 = (byte *)(puVar13 + 8);
          if (((long *)puVar13[0xb] == *(long **)(lVar11 + 0x58)) ||
             (uVar6 = (**(code **)(*(long *)puVar13[0xb] + 0x20))(), (uVar6 & 1) != 0)) {
            if ((*pbVar2 & 1) != 0) {
              (**(code **)(*(long *)puVar13[0xb] + 0x18))
                        ((long *)puVar13[0xb],puVar13[10],puVar13[8] & 0xfffffffffffffffe,1);
              *(undefined2 *)(puVar13 + 8) = 0;
            }
            uVar16 = *(undefined8 *)(lVar11 + 0x48);
            uVar15 = *(undefined8 *)(lVar11 + 0x40);
            puVar13[10] = *(undefined8 *)(lVar11 + 0x50);
            puVar13[9] = uVar16;
            *(undefined8 *)pbVar2 = uVar15;
            *(undefined2 *)(lVar11 + 0x40) = 0;
          }
          else {
                    /* try { // try from 0024aec0 to 0024aecb has its CatchHandler @ 0024af98 */
            FUN_01d0e1a8(pbVar2,(undefined8 *)(lVar11 + 0x40));
            if ((*(byte *)(lVar11 + 0x40) & 1) != 0) {
              (**(code **)(**(long **)(lVar11 + 0x58) + 0x18))
                        (*(long **)(lVar11 + 0x58),*(undefined8 *)(lVar11 + 0x50),
                         *(ulong *)(lVar11 + 0x40) & 0xfffffffffffffffe,1);
            }
          }
          if ((*(byte *)(lVar11 + 0x20) & 1) != 0) {
            (**(code **)(**(long **)(lVar11 + 0x38) + 0x18))
                      (*(long **)(lVar11 + 0x38),*(undefined8 *)(lVar11 + 0x30),
                       *(ulong *)(lVar11 + 0x20) & 0xfffffffffffffffe,1);
          }
          (**(code **)(*(long *)param_2[2] + 0x18))((long *)param_2[2],lVar11,0x60,8);
          plVar14 = (long *)*plVar12;
          if (plVar14 != (long *)0x0) {
            uVar6 = (ulong)(*(byte *)(puVar13 + 4) >> 1);
            __s1 = (void *)puVar13[6];
            if ((*(byte *)(puVar13 + 4) & 1) == 0) {
              __s1 = (void *)((long)puVar13 + 0x21);
            }
            else {
              uVar6 = puVar13[5];
            }
            do {
              bVar4 = *(byte *)(plVar14 + 4);
              uVar3 = (ulong)(bVar4 >> 1);
              if ((bVar4 & 1) != 0) {
                uVar3 = plVar14[5];
              }
              __n = uVar3;
              if (uVar6 <= uVar3) {
                __n = uVar6;
              }
              if (__n == 0) {
LAB_0024ae9c:
                if (uVar6 < uVar3) goto LAB_0024aea4;
LAB_0024ae4c:
                plVar8 = (long *)plVar14[1];
                if (plVar8 == (long *)0x0) {
                  plVar8 = plVar14 + 1;
                  goto LAB_0024aefc;
                }
              }
              else {
                __s2 = (void *)plVar14[6];
                if ((bVar4 & 1) == 0) {
                  __s2 = (void *)((long)plVar14 + 0x21);
                }
                iVar5 = memcmp(__s1,__s2,__n);
                if (iVar5 == 0) goto LAB_0024ae9c;
                if (-1 < iVar5) goto LAB_0024ae4c;
LAB_0024aea4:
                plVar8 = (long *)*plVar14;
                if (plVar8 == (long *)0x0) goto code_r0x0024aeac;
              }
              plVar14 = plVar8;
            } while( true );
          }
          plVar8 = plVar12;
          plVar14 = plVar12;
          goto LAB_0024aefc;
        }
        goto LAB_0024abdc;
      }
      puVar7 = (undefined8 *)*puVar10;
      if (puVar7 == puVar13) {
        *puVar10 = 0;
        puVar7 = (undefined8 *)puVar10[1];
        if ((undefined8 *)puVar10[1] == (undefined8 *)0x0) goto LAB_0024acd4;
        do {
          do {
            puVar10 = puVar7;
            puVar7 = (undefined8 *)*puVar10;
          } while ((undefined8 *)*puVar10 != (undefined8 *)0x0);
          puVar7 = (undefined8 *)puVar10[1];
        } while ((undefined8 *)puVar10[1] != (undefined8 *)0x0);
      }
      else {
        puVar10[1] = 0;
        if (puVar7 == (undefined8 *)0x0) goto LAB_0024acd4;
        do {
          do {
            puVar10 = puVar7;
            puVar7 = (undefined8 *)*puVar10;
          } while ((undefined8 *)*puVar10 != (undefined8 *)0x0);
          puVar7 = (undefined8 *)puVar10[1];
        } while ((undefined8 *)puVar10[1] != (undefined8 *)0x0);
      }
      if (puVar13 != (undefined8 *)0x0) goto LAB_0024acd4;
LAB_0024abdc:
      FUN_01cfa44c(param_1,puVar13);
      if (puVar10 == (undefined8 *)0x0) goto LAB_0024ac2c;
      puVar13 = (undefined8 *)puVar10[2];
      while (puVar7 = puVar13, puVar7 != (undefined8 *)0x0) {
        puVar10 = puVar7;
        puVar13 = (undefined8 *)puVar7[2];
      }
    }
    FUN_01cfa44c(param_1,puVar10);
  }
LAB_0024ac2c:
  while (param_2[3] != 0) {
    lVar11 = *param_2;
    lVar9 = *(long *)(lVar11 + 8);
    if (lVar9 == 0) {
      lVar9 = *(long *)(lVar11 + 0x10);
    }
    *param_2 = lVar9;
    param_2[3] = param_2[3] + -1;
    FUN_01336080(param_2[1],lVar11);
    local_70 = lVar11 + 0x20;
    lStack_68 = lVar11 + 0x40;
                    /* try { // try from 0024ac68 to 0024ac77 has its CatchHandler @ 0024b038 */
    FUN_0024b0ac(param_1,plVar12,&local_70);
    if (lVar11 != 0) {
      if ((*(byte *)(lVar11 + 0x40) & 1) != 0) {
        (**(code **)(**(long **)(lVar11 + 0x58) + 0x18))
                  (*(long **)(lVar11 + 0x58),*(undefined8 *)(lVar11 + 0x50),
                   *(ulong *)(lVar11 + 0x40) & 0xfffffffffffffffe,1);
      }
      if ((*(byte *)(lVar11 + 0x20) & 1) != 0) {
        (**(code **)(**(long **)(lVar11 + 0x38) + 0x18))
                  (*(long **)(lVar11 + 0x38),*(undefined8 *)(lVar11 + 0x30),
                   *(ulong *)(lVar11 + 0x20) & 0xfffffffffffffffe,1);
      }
      (**(code **)(*(long *)param_2[2] + 0x18))((long *)param_2[2],lVar11,0x60,8);
    }
  }
  return;
code_r0x0024aeac:
  plVar8 = plVar14;
LAB_0024aefc:
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar13[2] = plVar14;
  *plVar8 = (long)puVar13;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    puVar13 = (undefined8 *)*plVar8;
  }
  FUN_010108e0(param_1[1],puVar13);
  param_1[3] = param_1[3] + 1;
  if (puVar7 != (undefined8 *)0x0) {
    puVar10 = (undefined8 *)puVar7[2];
    if (puVar10 == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)0x0;
    }
    else {
      puVar13 = (undefined8 *)*puVar10;
      if (puVar13 == puVar7) {
        *puVar10 = 0;
        puVar13 = (undefined8 *)puVar10[1];
        if ((undefined8 *)puVar10[1] != (undefined8 *)0x0) {
          do {
            do {
              puVar10 = puVar13;
              puVar13 = (undefined8 *)*puVar10;
            } while ((undefined8 *)*puVar10 != (undefined8 *)0x0);
            puVar13 = (undefined8 *)puVar10[1];
          } while ((undefined8 *)puVar10[1] != (undefined8 *)0x0);
        }
      }
      else {
        puVar10[1] = 0;
        if (puVar13 != (undefined8 *)0x0) {
          do {
            do {
              puVar10 = puVar13;
              puVar13 = (undefined8 *)*puVar10;
            } while ((undefined8 *)*puVar10 != (undefined8 *)0x0);
            puVar13 = (undefined8 *)puVar10[1];
          } while ((undefined8 *)puVar10[1] != (undefined8 *)0x0);
        }
      }
    }
  }
  puVar13 = puVar7;
  if (puVar7 == (undefined8 *)0x0) goto LAB_0024abdc;
  goto LAB_0024acd4;
}


