/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034ef5f4; name: FUN_034ef5f4
 */


long FUN_034ef5f4(long *param_1,long param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  float fVar15;
  long local_70;
  long lStack_68;
  undefined8 *local_60;
  char local_58 [4];
  float local_54;
  ulong local_38;
  
  if (param_2 == 0) {
    lVar9 = FUN_0349fff0(param_1);
    if (lVar9 == 0) {
      return 0;
    }
    uVar8 = *(uint *)(lVar9 + 100) >> 8 & 0xf;
    if (3 < uVar8) {
      return 0;
    }
    if (((*(uint *)(lVar9 + 100) & 0xff) == 0) && (uVar8 != 3)) {
      return 0;
    }
    local_38 = local_38 & 0xffffffffffffff00;
    param_2 = FUN_0349ad74(lVar9,&local_38);
    uVar8 = DAT_048b0810;
    if ((char)local_38 != '\0') {
      if (param_2 == 0) {
        return 0;
      }
      if ((*(long *)(param_2 + 0x28) == 0) &&
         ((*(long *)(param_2 + 0x60) == 0 || (*(long *)(*(long *)(param_2 + 0x60) + 0xa0) == 0)))) {
        if (DAT_048b0814 <= DAT_048b0810) {
          iVar5 = DAT_048b0814 + (DAT_048b0814 >> 1);
          if (DAT_048b0814 == 0) {
            iVar5 = 1;
          }
          uVar1 = iVar5 + DAT_048b0814;
          plVar7 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x20))(5,DAT_048b0808,(ulong)uVar1 << 3);
          if (plVar7 == (long *)0x0) goto LAB_034efc10;
          DAT_048b0808 = plVar7;
          DAT_048b0814 = uVar1;
        }
        if (uVar8 < DAT_048b0814) {
          uVar10 = (ulong)DAT_048b0810;
          uVar8 = DAT_048b0810 + 1;
          bVar2 = DAT_048b0810 != 0;
          plVar7 = DAT_048b0808;
          DAT_048b0810 = uVar8;
          if (bVar2) {
            plVar12 = DAT_048b0808 + uVar10;
            do {
              plVar11 = plVar12 + -1;
              *plVar12 = *plVar11;
              plVar7 = DAT_048b0808;
              plVar12 = plVar11;
            } while (DAT_048b0808 < plVar11);
          }
LAB_034ef7d8:
          if (plVar7 != (long *)0x0) {
            *plVar7 = param_2;
            DAT_048b084c = 1;
            uVar10 = (ulong)DAT_048b0810;
            if (DAT_048b0810 != 0) {
              uVar14 = 0;
              do {
                lVar13 = DAT_048b0808[uVar14];
                if (((lVar13 != param_2) && (*(long *)(lVar13 + 0x28) == 0)) &&
                   ((*(long *)(lVar13 + 0x60) == 0 ||
                    (*(long *)(*(long *)(lVar13 + 0x60) + 0xa0) == 0)))) {
                  lVar6 = FUN_0349fff0(lVar13 + 0x60);
                  if (lVar6 == lVar9) {
                    FUN_035000f0(lVar13,param_2,0);
                    break;
                  }
                  uVar10 = (ulong)DAT_048b0810;
                }
                uVar14 = uVar14 + 1;
              } while (uVar14 < uVar10);
            }
            goto joined_r0x034efca8;
          }
        }
      }
      else {
        if (DAT_048b0814 <= DAT_048b0810) {
          iVar5 = DAT_048b0814 + (DAT_048b0814 >> 1);
          if (DAT_048b0814 == 0) {
            iVar5 = 1;
          }
          uVar1 = iVar5 + DAT_048b0814;
          plVar7 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x20))(5,DAT_048b0808,(ulong)uVar1 << 3);
          if (plVar7 == (long *)0x0) goto LAB_034efc10;
          DAT_048b0808 = plVar7;
          DAT_048b0814 = uVar1;
        }
        if (uVar8 < DAT_048b0814) {
          plVar7 = DAT_048b0808 + DAT_048b0810;
          DAT_048b0810 = DAT_048b0810 + 1;
          goto LAB_034ef7d8;
        }
      }
LAB_034efc10:
      lVar13 = *(long *)(lVar9 + 0x460);
      if (lVar13 == 0) goto LAB_034efc44;
      if (*(long *)(lVar13 + 0x28) == 0) {
        if (*(long *)(lVar13 + 0x60) == 0) {
          if (*(long *)(lVar13 + 0x68) != -1) goto LAB_034efc70;
        }
        else if (*(long *)(*(long *)(lVar13 + 0x60) + 0xa0) == 0) {
LAB_034efc70:
          lVar6 = FUN_0349fff0(lVar13 + 0x60);
          if ((lVar6 != 0) &&
             ((*(long *)(lVar6 + 0x460) == lVar13 || (*(long *)(lVar6 + 0x460) == 0)))) {
            *(undefined1 *)(lVar6 + 0x46c) = 0;
            *(undefined8 *)(lVar6 + 0x460) = 0;
          }
        }
      }
      FUN_03504ca4(lVar13);
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,lVar13);
      *(undefined8 *)(lVar9 + 0x460) = 0;
LAB_034efc44:
      *(undefined1 *)(lVar9 + 0x46c) = 1;
      return 0;
    }
joined_r0x034efca8:
    if (param_2 != 0) goto LAB_034ef61c;
    lVar9 = *param_1;
    if (lVar9 != 0) goto LAB_034ef624;
LAB_034ef854:
    lVar9 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(5,0x1a8);
    if (lVar9 == 0) {
      return 0;
    }
    FUN_03504b98();
    *(undefined4 *)(lVar9 + 0x1a0) = 0x7fffffff;
    *(byte *)(lVar9 + 0x1a4) = *(byte *)(lVar9 + 0x1a4) & 0xf8;
  }
  else {
LAB_034ef61c:
    lVar9 = *param_1;
    if (lVar9 == 0) {
      return param_2;
    }
LAB_034ef624:
    if ((*(byte *)(lVar9 + 0xba) & 0xe) == 0) goto LAB_034ef854;
    lVar9 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(5,0x1c0);
    if (lVar9 == 0) {
      return 0;
    }
    lVar13 = *param_1;
    FUN_03504b98();
    *(undefined4 *)(lVar9 + 0x1a0) = 0x7fffffff;
    *(undefined8 *)(lVar9 + 0x1a8) = 0xc5800000c5800000;
    *(undefined8 *)(lVar9 + 0x1b0) = 0xc5800000;
    *(byte *)(lVar9 + 0x1a4) = *(byte *)(lVar9 + 0x1a4) & 0xf8 | 4;
    FUN_034f18ac(lVar13,lVar9 + 0x1b8,&local_38);
    *(float *)(lVar9 + 0x1bc) = 1.0 - 1.0 / (float)local_38;
    FUN_034f1b0c(lVar13,&local_54,local_58);
    *(byte *)(lVar9 + 0x1a4) = *(byte *)(lVar9 + 0x1a4) & 0xf7 | local_58[0] << 3;
    if (local_54 <= 0.0) {
      fVar15 = 0.0;
    }
    else {
      fVar15 = expf((float)(int)-(uint)*(ushort *)PTR_DAT_047e6d08 / (local_54 * 48000.0));
    }
    *(float *)(lVar9 + 0x1b4) = fVar15;
  }
  local_70 = *param_1;
  lStack_68 = param_1[1];
  local_60 = (undefined8 *)param_1[2];
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  iVar5 = FUN_034efcb0(lVar9,&local_70,param_2);
  puVar4 = local_60;
  if (local_60 != (undefined8 *)0x0) {
    iVar3 = *(int *)(local_60 + 0x10);
    uVar8 = iVar3 - 1;
    *(uint *)(local_60 + 0x10) = uVar8;
    if (iVar3 == 0 || uVar8 == 0) {
      if (uVar8 == 0) {
LAB_034ef8f8:
        uVar10 = local_60[5];
        if (uVar10 != 0) {
          uVar8 = ((uint)uVar10 ^ (uint)uVar10 >> 0x10) * -0x7a143595;
          uVar8 = (uVar8 ^ uVar8 >> 0xd) * -0x3d4d51cb;
          local_38 = uVar10;
          FUN_034c6294(&DAT_048b02b8,&local_38,uVar8 ^ uVar8 >> 0x10);
          uVar8 = *(uint *)(puVar4 + 0x10);
        }
        goto LAB_034ef93c;
      }
    }
    else if (uVar8 < 2) {
      if (*(char *)((long)local_60 + 0x84) != '\0') goto LAB_034ef8f8;
LAB_034ef93c:
      if (uVar8 == 0) {
        (**(code **)*puVar4)(puVar4);
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(4,puVar4);
      }
    }
    local_60 = (undefined8 *)0x0;
  }
  uVar8 = DAT_048b0810;
  if (iVar5 == 1) {
    if ((*(long *)(lVar9 + 0x28) == 0) &&
       ((*(long *)(lVar9 + 0x60) == 0 || (*(long *)(*(long *)(lVar9 + 0x60) + 0xa0) == 0)))) {
      if (DAT_048b0814 <= DAT_048b0810) {
        iVar5 = DAT_048b0814 + (DAT_048b0814 >> 1);
        if (DAT_048b0814 == 0) {
          iVar5 = 1;
        }
        uVar1 = iVar5 + DAT_048b0814;
        plVar7 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x20))(5,DAT_048b0808,(ulong)uVar1 << 3);
        if (plVar7 == (long *)0x0) goto LAB_034efac8;
        DAT_048b0808 = plVar7;
        DAT_048b0814 = uVar1;
      }
      if (uVar8 < DAT_048b0814) {
        uVar10 = (ulong)DAT_048b0810;
        uVar8 = DAT_048b0810 + 1;
        bVar2 = DAT_048b0810 != 0;
        plVar7 = DAT_048b0808;
        DAT_048b0810 = uVar8;
        if (bVar2) {
          plVar12 = DAT_048b0808 + uVar10;
          do {
            plVar11 = plVar12 + -1;
            *plVar12 = *plVar11;
            plVar7 = DAT_048b0808;
            plVar12 = plVar11;
          } while (DAT_048b0808 < plVar11);
        }
LAB_034ef9f8:
        if (plVar7 != (long *)0x0) {
          *plVar7 = lVar9;
          DAT_048b084c = 1;
          return lVar9;
        }
      }
    }
    else {
      if (DAT_048b0814 <= DAT_048b0810) {
        iVar5 = DAT_048b0814 + (DAT_048b0814 >> 1);
        if (DAT_048b0814 == 0) {
          iVar5 = 1;
        }
        uVar1 = iVar5 + DAT_048b0814;
        plVar7 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x20))(5,DAT_048b0808,(ulong)uVar1 << 3);
        if (plVar7 == (long *)0x0) goto LAB_034efac8;
        DAT_048b0808 = plVar7;
        DAT_048b0814 = uVar1;
      }
      if (uVar8 < DAT_048b0814) {
        plVar7 = DAT_048b0808 + DAT_048b0810;
        DAT_048b0810 = DAT_048b0810 + 1;
        goto LAB_034ef9f8;
      }
    }
  }
LAB_034efac8:
  if (*(long *)(lVar9 + 0x28) == 0) {
    if (*(long *)(lVar9 + 0x60) == 0) {
      if (*(long *)(lVar9 + 0x68) == -1) goto LAB_034efad0;
    }
    else if (*(long *)(*(long *)(lVar9 + 0x60) + 0xa0) != 0) goto LAB_034efad0;
    lVar13 = FUN_0349fff0();
    if ((lVar13 != 0) && ((*(long *)(lVar13 + 0x460) == lVar9 || (*(long *)(lVar13 + 0x460) == 0))))
    {
      *(undefined1 *)(lVar13 + 0x46c) = 0;
      *(undefined8 *)(lVar13 + 0x460) = 0;
    }
  }
LAB_034efad0:
  FUN_03504ca4(lVar9);
  (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,lVar9);
  return 0;
}


