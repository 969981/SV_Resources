/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033b0858; name: FUN_033b0858
 */


void FUN_033b0858(long *param_1,undefined8 *param_2,ulong param_3,long param_4)

{
  int *piVar1;
  void *pvVar2;
  char *__dest;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  size_t sVar7;
  long *plVar8;
  long *plVar9;
  undefined *puVar10;
  long *plVar11;
  long lVar12;
  ulong extraout_x1;
  char *pcVar13;
  ulong *puVar14;
  ushort uVar15;
  uint uVar16;
  ulong *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  byte *pbVar20;
  code *pcVar21;
  short *psVar22;
  ulong *puVar23;
  uint uVar24;
  undefined8 *puVar25;
  ulong uVar26;
  short *psVar27;
  undefined8 *puVar28;
  long *plVar29;
  int iVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  undefined1 auStack_260 [8];
  undefined8 local_258;
  ulong local_250;
  undefined8 *local_248;
  ulong local_240;
  undefined8 local_238;
  ulong local_230;
  undefined4 local_1b8;
  ulong *local_1b0;
  ulong local_1a8;
  ulong local_1a0;
  ulong local_198;
  undefined4 local_120;
  ulong *local_118;
  undefined *local_110;
  ulong local_108;
  ulong local_100;
  undefined4 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  ulong local_70;
  
  puVar14 = (ulong *)param_2[1];
  puVar17 = puVar14;
  if ((*puVar14 & 1) == 0) {
    do {
      puVar17 = (ulong *)puVar17[1];
    } while ((*puVar17 & 1) == 0);
  }
  switch((uint)puVar17[2] & 0x1f) {
  case 2:
    local_108 = (ulong)local_108._1_7_ << 8;
    local_118 = &local_108;
    local_1b0 = (ulong *)((ulong)local_1b0 & 0xffffffffffffff00);
    local_110 = (undefined *)0x8000008000000001;
    local_88 = 1;
    (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
              ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,puVar14,&local_1b0);
    pcVar13 = "false";
    if ((char)local_1b0 != '\0') {
      pcVar13 = "true";
    }
    FUN_031c6c18(&local_118,"<bool value=\"%s\"/>",pcVar13);
    break;
  case 3:
    local_118 = (ulong *)0x0;
    (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
              ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,puVar14,&local_118);
    puVar17 = local_118;
    if (local_118 != (ulong *)0x0) {
      local_118 = &local_108;
      local_110 = (undefined *)0x8000008000000000;
      local_88 = 1;
      FUN_031c6afc(&local_118,puVar17,0xffffffff);
      FUN_031c7de4(&local_118,&DAT_03c8299e,"&amp;",1);
      FUN_031c7de4(&local_118,&DAT_03bd47a0,&DAT_03c81fb3,1);
      FUN_031c7de4(&local_118,&DAT_03c32803,&DAT_03c31de0,1);
      FUN_031c7de4(&local_118,&DAT_03c246d6,"&quot;",1);
      FUN_031c7de4(&local_118,&DAT_03c24414,"&apos;",1);
      local_1b0 = &local_1a0;
      local_1a8 = 0x8000008000000001;
      local_120 = 1;
      local_1a0 = local_1a0 & 0xffffffffffffff00;
      FUN_031c6c18(&local_1b0,"<string value=\"%s\"/>",local_118);
      puVar17 = local_1b0;
      if ((param_3 & 1) == 0) {
        FUN_033adeb8(*param_1,&DAT_03c886bc);
      }
      puVar28 = (undefined8 *)*param_1;
      sVar7 = strlen((char *)puVar17);
      puVar14 = (ulong *)*puVar28;
      pvVar2 = (void *)*puVar14;
      uVar18 = (long)pvVar2 + (long)(int)sVar7;
      if (puVar14[1] < uVar18) {
        plVar29 = (long *)puVar14[6];
        if (plVar29 == (long *)0x0) {
          memcpy(pvVar2,puVar17,puVar14[1] - (long)pvVar2);
          *puVar14 = puVar14[1];
        }
        else {
          (**(code **)(*plVar29 + 0x30))(plVar29,puVar14,puVar17);
        }
      }
      else {
        memcpy(pvVar2,puVar17,(long)(int)sVar7);
        *puVar14 = uVar18;
      }
      uVar18 = local_1a8;
      local_1a8 = local_1a8 & 0xffffffff00000000;
      if ((-1 < (long)uVar18) && (local_1b0 != (ulong *)0x0)) {
        (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
      }
      goto LAB_033b1978;
    }
    if ((param_3 & 1) == 0) {
      FUN_033adeb8(*param_1,&DAT_03c886bc);
    }
    puVar17 = *(ulong **)*param_1;
    __dest = (char *)*puVar17;
    pcVar13 = __dest + 9;
    if ((char *)puVar17[1] < pcVar13) {
      plVar29 = (long *)puVar17[6];
      if (plVar29 == (long *)0x0) {
        memcpy(__dest,"<string/>",(long)puVar17[1] - (long)__dest);
        pcVar13 = (char *)puVar17[1];
        goto LAB_033b1ab8;
      }
      (**(code **)(*plVar29 + 0x30))(plVar29,puVar17,"<string/>",9);
    }
    else {
      __dest[8] = '>';
      *(undefined8 *)__dest = s_<string_>_03c7b03b._0_8_;
LAB_033b1ab8:
      *puVar17 = (ulong)pcVar13;
    }
    goto joined_r0x033b19a0;
  case 4:
    local_118 = (ulong *)0x0;
    local_110 = (undefined *)((ulong)local_110 & 0xffffffffffffff00);
    (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
              ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,puVar14,&local_118);
    pbVar20 = (byte *)param_2[1];
    do {
      if ((*pbVar20 & 1) != 0) {
        if ((pbVar20 != (byte *)0x0) && (((uint)*(undefined8 *)(pbVar20 + 0x10) >> 9 & 1) != 0)) {
          puVar17 = (ulong *)-(long)local_118;
          if (((ulong)local_110 & 0xff) == 0) {
            puVar17 = local_118;
          }
          pcVar13 = "<integer value=\"%lld\"/>";
          goto LAB_033b0ea0;
        }
        break;
      }
      pbVar20 = *(byte **)(pbVar20 + 8);
    } while (pbVar20 != (byte *)0x0);
    pcVar13 = "<integer value=\"%llu\"/>";
    puVar17 = local_118;
LAB_033b0ea0:
    local_110 = (undefined *)0x8000008000000001;
    local_118 = &local_108;
    local_88 = 1;
    local_108 = local_108 & 0xffffffffffffff00;
    FUN_031c6c18(&local_118,pcVar13,puVar17);
    puVar17 = local_118;
    if ((param_3 & 1) == 0) {
      FUN_033adeb8(*param_1,&DAT_03c886bc);
    }
    puVar28 = (undefined8 *)*param_1;
    sVar7 = strlen((char *)puVar17);
    puVar14 = (ulong *)*puVar28;
    pvVar2 = (void *)*puVar14;
    uVar18 = (long)pvVar2 + (long)(int)sVar7;
    if (puVar14[1] < uVar18) {
      plVar29 = (long *)puVar14[6];
      if (plVar29 == (long *)0x0) {
        memcpy(pvVar2,puVar17,puVar14[1] - (long)pvVar2);
        *puVar14 = puVar14[1];
      }
      else {
        (**(code **)(*plVar29 + 0x30))(plVar29,puVar14,puVar17);
      }
    }
    else {
      memcpy(pvVar2,puVar17,(long)(int)sVar7);
      *puVar14 = uVar18;
    }
LAB_033b1978:
    puVar10 = local_110;
    local_110 = (undefined *)((ulong)local_110 & 0xffffffff00000000);
    if ((-1 < (long)puVar10) && (local_118 != (ulong *)0x0)) {
      (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
    }
joined_r0x033b19a0:
    if (param_4 == 0) {
      s_<string_>_03c7b03b[0] = s_<string_>_03c7b03b[0];
      s_<string_>_03c7b03b[1] = s_<string_>_03c7b03b[1];
      s_<string_>_03c7b03b[2] = s_<string_>_03c7b03b[2];
      s_<string_>_03c7b03b[3] = s_<string_>_03c7b03b[3];
      s_<string_>_03c7b03b[4] = s_<string_>_03c7b03b[4];
      s_<string_>_03c7b03b[5] = s_<string_>_03c7b03b[5];
      s_<string_>_03c7b03b[6] = s_<string_>_03c7b03b[6];
      s_<string_>_03c7b03b[7] = s_<string_>_03c7b03b[7];
      return;
    }
    lVar12 = FUN_031d4cac(param_4,param_2);
    if (lVar12 == 0) {
      return;
    }
    local_118 = &local_108;
    local_108 = local_108 & 0xffffffffffffff00;
    local_110 = (undefined *)0x8000008000000001;
    local_88 = 1;
    FUN_031c6c18(&local_118,"<!-- %s -->",lVar12);
    puVar17 = local_118;
    puVar28 = (undefined8 *)*param_1;
    sVar7 = strlen((char *)local_118);
    puVar14 = (ulong *)*puVar28;
    pvVar2 = (void *)*puVar14;
    uVar18 = (long)pvVar2 + (long)(int)sVar7;
    if (puVar14[1] < uVar18) {
      plVar29 = (long *)puVar14[6];
      if (plVar29 == (long *)0x0) {
        memcpy(pvVar2,puVar17,puVar14[1] - (long)pvVar2);
        *puVar14 = puVar14[1];
        goto LAB_033b1a5c;
      }
      pcVar21 = *(code **)(*plVar29 + 0x30);
      goto LAB_033b1a2c;
    }
    memcpy(pvVar2,puVar17,(long)(int)sVar7);
    *puVar14 = uVar18;
    goto LAB_033b1a5c;
  case 5:
    local_118 = (ulong *)0x0;
    (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
              ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,puVar14,&local_118);
    puVar17 = local_118;
    local_1b0 = &local_1a0;
    local_1a0 = local_1a0 & 0xffffffffffffff00;
    local_1a8 = 0x8000008000000001;
    local_120 = 1;
    local_118 = (ulong *)0x0;
    (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
              ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],&local_118);
    FUN_031c6c18(local_118,&local_1b0,"<real dec=\"%lg\" hex=\"#%llx\"/>",puVar17);
    puVar17 = local_1b0;
    if ((param_3 & 1) == 0) {
      FUN_033adeb8(*param_1,&DAT_03c886bc);
    }
    puVar28 = (undefined8 *)*param_1;
    sVar7 = strlen((char *)puVar17);
    puVar14 = (ulong *)*puVar28;
    pvVar2 = (void *)*puVar14;
    uVar18 = (long)pvVar2 + (long)(int)sVar7;
    if (puVar14[1] < uVar18) {
      plVar29 = (long *)puVar14[6];
      if (plVar29 == (long *)0x0) {
        memcpy(pvVar2,puVar17,puVar14[1] - (long)pvVar2);
        *puVar14 = puVar14[1];
      }
      else {
        (**(code **)(*plVar29 + 0x30))(plVar29,puVar14,puVar17);
      }
    }
    else {
      memcpy(pvVar2,puVar17,(long)(int)sVar7);
      *puVar14 = uVar18;
    }
    if ((param_4 != 0) && (lVar12 = FUN_031d4cac(param_4,param_2), lVar12 != 0)) {
      local_118 = &local_108;
      local_88 = 1;
      local_108 = local_108 & 0xffffffffffffff00;
      local_110 = (undefined *)0x8000008000000001;
      FUN_031c6c18(&local_118,"<!-- %s -->",lVar12);
      puVar17 = local_118;
      puVar28 = (undefined8 *)*param_1;
      sVar7 = strlen((char *)local_118);
      puVar14 = (ulong *)*puVar28;
      pvVar2 = (void *)*puVar14;
      uVar18 = (long)pvVar2 + (long)(int)sVar7;
      if (puVar14[1] < uVar18) {
        plVar29 = (long *)puVar14[6];
        if (plVar29 == (long *)0x0) {
          memcpy(pvVar2,puVar17,puVar14[1] - (long)pvVar2);
          *puVar14 = puVar14[1];
        }
        else {
          (**(code **)(*plVar29 + 0x30))(plVar29,puVar14,puVar17);
        }
      }
      else {
        memcpy(pvVar2,puVar17,(long)(int)sVar7);
        *puVar14 = uVar18;
      }
      puVar10 = local_110;
      local_110 = (undefined *)((ulong)local_110 & 0xffffffff00000000);
      if ((-1 < (long)puVar10) && (local_118 != (ulong *)0x0)) {
        (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
      }
    }
    uVar18 = local_1a8;
    local_1a8 = local_1a8 & 0xffffffff00000000;
    if ((long)uVar18 < 0) {
      return;
    }
    if (local_1b0 == (ulong *)0x0) {
      return;
    }
    goto LAB_033b1a70;
  case 6:
    uVar6 = (**(code **)(*(long *)param_1[1] + 0x20))((long *)param_1[1],param_2);
    local_108 = local_108 & 0xffffffffffffff00;
    local_118 = &local_108;
    local_110 = (undefined *)0x8000008000000001;
    local_88 = 1;
    FUN_031c6c18(&local_118,"<pointer id=\"object%d\"/>",uVar6);
    break;
  case 7:
    if ((param_3 & 1) != 0) {
      *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
      puVar14 = (ulong *)param_2[1];
    }
    local_108 = (ulong)local_108._1_7_ << 8;
    local_118 = &local_108;
    local_110 = (undefined *)0x8000008000000001;
    local_88 = 1;
    do {
      uVar18 = *puVar14;
      if (((uint)uVar18 >> 3 & 1) != 0) {
        uVar26 = 0;
        if (puVar14 != (ulong *)0x0) {
          uVar26 = puVar14[(ulong)(byte)POPCOUNT((byte)uVar18 & 7) + 2];
        }
        goto LAB_033b1388;
      }
      if ((uVar18 & 1) != 0) {
        uVar26 = 0;
        goto LAB_033b1388;
      }
      puVar14 = (ulong *)puVar14[1];
    } while (puVar14 != (ulong *)0x0);
    uVar26 = 0;
LAB_033b1388:
    FUN_031c6c18(&local_118,"<record> <!-- %s -->",uVar26);
    FUN_033adeb8(*param_1,local_118);
    *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
    puVar32 = (undefined8 *)param_2[1];
    plVar9 = (long *)0x0;
    plVar29 = (long *)0x0;
    puVar28 = (undefined8 *)0x0;
LAB_033b13e4:
    plVar29 = plVar29 + 1;
    puVar19 = puVar28;
    if (plVar9 <= plVar29) {
      if (puVar32 == puVar28) goto LAB_033b17bc;
      psVar22 = (short *)0x0;
      puVar19 = (undefined8 *)0x0;
      puVar25 = puVar32;
      do {
        if (((uint)*puVar25 >> 0x17 & 1) != 0) {
          uVar16 = (uint)*puVar25 & 0x7fffff;
          psVar27 = (short *)puVar25[(ulong)(byte)(POPCOUNT((char)uVar16) +
                                                   POPCOUNT((char)(uVar16 >> 8)) +
                                                  POPCOUNT((char)(uVar16 >> 0x10))) + 2];
          if (psVar27 != (short *)0x0) {
            if ((int)psVar27[1] + (int)*psVar27 != 0) {
              psVar22 = psVar27;
              puVar19 = puVar25;
            }
          }
        }
        puVar25 = (undefined8 *)puVar25[1];
      } while (puVar25 != puVar28);
      if (puVar19 == (undefined8 *)0x0) goto LAB_033b17bc;
      plVar29 = (long *)(psVar22 + 4);
      plVar9 = plVar29 + (long)psVar22[1] + (long)*psVar22;
    }
    uVar16 = (uint)*(undefined8 *)*plVar29;
    if ((uVar16 >> 0x11 & 1) == 0) {
      uVar15 = 0;
    }
    else {
      uVar16 = uVar16 & 0x1ffff;
      uVar15 = *(ushort *)
                (*plVar29 +
                (ulong)(byte)(POPCOUNT((char)uVar16) + POPCOUNT((char)(uVar16 >> 8)) +
                             POPCOUNT((char)(uVar16 >> 0x10))) * 8 + 0x12);
    }
    puVar28 = puVar19;
    if ((uVar15 & 0x30) != 0) {
      puVar17 = (ulong *)*plVar29;
      uVar18 = *puVar17;
      uVar16 = (uint)uVar18;
      if ((((uVar16 >> 0x11 & 1) == 0) ||
          (uVar24 = uVar16 & 0x1ffff,
          ((uint)puVar17[(ulong)(byte)(POPCOUNT((char)uVar24) + POPCOUNT((char)(uVar24 >> 8)) +
                                      POPCOUNT((char)(uVar24 >> 0x10))) + 2] >> 0x10 & 1) == 0)) &&
         (puVar17 != (ulong *)0x0)) {
        puVar14 = puVar17;
        uVar24 = uVar16;
        if ((uVar16 >> 0x10 & 1) == 0) {
          uVar26 = uVar18;
          do {
            if (((uVar26 & 1) != 0) || (puVar14 = (ulong *)puVar14[1], puVar14 == (ulong *)0x0))
            goto LAB_033b13e4;
            uVar26 = *puVar14;
            uVar24 = (uint)uVar26;
          } while ((uVar24 >> 0x10 & 1) == 0);
        }
        uVar26 = CONCAT44(uVar24,uVar24) & 0xffff0000ffff;
        puVar23 = puVar17;
        if (puVar14[(ulong)(byte)(POPCOUNT((char)uVar26) + POPCOUNT((char)(uVar26 >> 8))) + 2] != 0)
        {
          while ((uVar16 >> 0x10 & 1) == 0) {
            if (((uVar18 & 1) != 0) || (puVar23 = (ulong *)puVar23[1], puVar23 == (ulong *)0x0)) {
              uVar18 = 0;
              goto LAB_033b156c;
            }
            uVar18 = *puVar23;
            uVar16 = (uint)uVar18;
          }
          uVar18 = CONCAT44(uVar16,uVar16) & 0xffff0000ffff;
          uVar18 = puVar23[(ulong)(byte)(POPCOUNT((char)uVar18) + POPCOUNT((char)(uVar18 >> 8))) + 2
                          ];
LAB_033b156c:
          local_1a8 = 0x8000008000000000;
          local_120 = 1;
          local_1b0 = &local_1a0;
          FUN_031c6afc(&local_1b0,uVar18,0xffffffff);
          FUN_031c7de4(&local_1b0,&DAT_03c8299e,"&amp;",1);
          FUN_031c7de4(&local_1b0,&DAT_03bd47a0,&DAT_03c81fb3,1);
          FUN_031c7de4(&local_1b0,&DAT_03c32803,&DAT_03c31de0,1);
          FUN_031c7de4(&local_1b0,&DAT_03c246d6,"&quot;",1);
          FUN_031c7de4(&local_1b0,&DAT_03c24414,"&apos;",1);
          local_240 = 0x8000008000000001;
          local_1b8 = 1;
          local_238 = local_238 & 0xffffffffffffff00;
          local_248 = &local_238;
          FUN_031c6c18(&local_248,"<field name=\"%s\">",local_1b0);
          FUN_033adeb8(*param_1,local_248);
          FUN_031e32f0(auStack_260,param_2,puVar17);
          FUN_031e1bb4(&local_80,local_258,PTR_DAT_047e5b68);
          puVar19 = local_80;
          if ((local_70 & 1) != 0) {
            plVar11 = (long *)(local_70 & 0xfffffffffffffffe);
            plVar8 = plVar11 + 1;
            do {
              lVar12 = *plVar8;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar4) {
                *(int *)plVar8 = (int)lVar12 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if ((plVar11 != (long *)0x0) && ((int)lVar12 == 1)) {
              (**(code **)(*plVar11 + 8))();
            }
          }
          FUN_033b0858(param_1,auStack_260,1,puVar19);
          if ((local_250 & 1) != 0) {
            plVar11 = (long *)(local_250 & 0xfffffffffffffffe);
            plVar8 = plVar11 + 1;
            do {
              lVar12 = *plVar8;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar4) {
                *(int *)plVar8 = (int)lVar12 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if ((plVar11 != (long *)0x0) && ((int)lVar12 == 1)) {
              (**(code **)(*plVar11 + 8))();
            }
          }
          puVar31 = *(undefined8 **)*param_1;
          puVar25 = (undefined8 *)*puVar31;
          puVar19 = puVar25 + 1;
          if ((undefined8 *)puVar31[1] < puVar19) {
            plVar8 = (long *)puVar31[6];
            if (plVar8 == (long *)0x0) {
              memcpy(puVar25,"</field>",(long)puVar31[1] - (long)puVar25);
              puVar19 = (undefined8 *)puVar31[1];
              goto LAB_033b1764;
            }
            (**(code **)(*plVar8 + 0x30))(plVar8,puVar31,"</field>",8);
          }
          else {
            *puVar25 = 0x3e646c6569662f3c;
LAB_033b1764:
            *puVar31 = puVar19;
          }
          uVar18 = local_240;
          local_240 = local_240 & 0xffffffff00000000;
          if ((-1 < (long)uVar18) && (local_248 != (undefined8 *)0x0)) {
            (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
          }
          uVar18 = local_1a8;
          local_1a8 = local_1a8 & 0xffffffff00000000;
          if ((-1 < (long)uVar18) && (local_1b0 != (ulong *)0x0)) {
            (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
          }
        }
      }
    }
    goto LAB_033b13e4;
  case 8:
    if ((param_3 & 1) != 0) {
      *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
      puVar14 = (ulong *)param_2[1];
    }
    plVar29 = (long *)param_1[2];
    local_108 = 0;
    local_100 = 0;
    local_118 = (ulong *)0x0;
    local_110 = (undefined *)0x0;
    (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x50))
              ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,puVar14,&local_118);
    puVar10 = local_110;
    if ((local_100 & 1) != 0) {
      plVar8 = (long *)(local_100 & 0xfffffffffffffffe);
      plVar9 = plVar8 + 1;
      do {
        lVar12 = *plVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *(int *)plVar9 = (int)lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar8 != (long *)0x0) && ((int)lVar12 == 1)) {
        (**(code **)(*plVar8 + 8))();
      }
    }
    (**(code **)(*plVar29 + 0x20))(plVar29,puVar10);
    local_118 = &local_108;
    local_108 = local_108 & 0xffffffffffffff00;
    local_110 = (undefined *)0x8000008000000001;
    local_88 = 1;
    local_1a0 = 0;
    local_198 = 0;
    local_1b0 = (ulong *)0x0;
    local_1a8 = 0;
    (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x50))
              ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],&local_1b0);
    uVar18 = local_1a8;
    if ((local_198 & 1) != 0) {
      plVar9 = (long *)(local_198 & 0xfffffffffffffffe);
      plVar29 = plVar9 + 1;
      do {
        lVar12 = *plVar29;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar29,0x10);
        if (bVar4) {
          *(int *)plVar29 = (int)lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar9 != (long *)0x0) && ((int)lVar12 == 1)) {
        (**(code **)(*plVar9 + 8))();
      }
    }
    if (uVar18 == 0) {
      puVar10 = &DAT_03be61b3;
    }
    else {
      puVar10 = (undefined *)FUN_031e12d8(uVar18,&local_118,0,0);
    }
    local_1b0 = &local_1a0;
    local_1a8 = 0x8000008000000001;
    local_120 = 1;
    local_1a0 = local_1a0 & 0xffffffffffffff00;
    local_238 = 0;
    local_230 = 0;
    local_248 = (undefined8 *)0x0;
    local_240 = 0;
    (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x50))
              ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],&local_248);
    uVar18 = local_238;
    if ((local_230 & 1) != 0) {
      plVar9 = (long *)(local_230 & 0xfffffffffffffffe);
      plVar29 = plVar9 + 1;
      do {
        lVar12 = *plVar29;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar29,0x10);
        if (bVar4) {
          *(int *)plVar29 = (int)lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar9 != (long *)0x0) && ((int)lVar12 == 1)) {
        (**(code **)(*plVar9 + 8))();
      }
    }
    FUN_031c6c18(&local_1b0,"<array count=\"%d\" elementtypeid=\"type%d\"> <!-- ArrayOf %s -->",
                 uVar18 & 0xffffffff,extraout_x1 & 0xffffffff,puVar10);
    FUN_033adeb8(*param_1,local_1b0);
    *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
    local_238 = 0;
    local_230 = 0;
    local_248 = (undefined8 *)0x0;
    local_240 = 0;
    (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x50))
              ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],&local_248);
    uVar18 = local_240;
    if ((local_230 & 1) != 0) {
      plVar9 = (long *)(local_230 & 0xfffffffffffffffe);
      plVar29 = plVar9 + 1;
      do {
        lVar12 = *plVar29;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar29,0x10);
        if (bVar4) {
          *(int *)plVar29 = (int)lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar9 != (long *)0x0) && ((int)lVar12 == 1)) {
        (**(code **)(*plVar9 + 8))();
      }
    }
    if (uVar18 != 0) {
      local_238 = 0;
      local_230 = 0;
      local_248 = (undefined8 *)0x0;
      local_240 = 0;
      (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x50))
                ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],&local_248);
      uVar18 = local_240;
      if ((local_230 & 1) != 0) {
        plVar9 = (long *)(local_230 & 0xfffffffffffffffe);
        plVar29 = plVar9 + 1;
        do {
          lVar12 = *plVar29;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar4) {
            *(int *)plVar29 = (int)lVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((plVar9 != (long *)0x0) && ((int)lVar12 == 1)) {
          (**(code **)(*plVar9 + 8))();
        }
      }
      FUN_031e1bb4(&local_248,uVar18,PTR_DAT_047e5b68);
      puVar28 = local_248;
      if ((local_238 & 1) != 0) {
        plVar9 = (long *)(local_238 & 0xfffffffffffffffe);
        plVar29 = plVar9 + 1;
        do {
          lVar12 = *plVar29;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar4) {
            *(int *)plVar29 = (int)lVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((plVar9 != (long *)0x0) && ((int)lVar12 == 1)) {
          (**(code **)(*plVar9 + 8))();
        }
      }
      iVar30 = 0;
      while( true ) {
        local_238 = 0;
        local_230 = 0;
        local_248 = (undefined8 *)0x0;
        local_240 = 0;
        (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x50))
                  ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],&local_248);
        iVar5 = (int)local_238;
        if ((local_230 & 1) != 0) {
          plVar9 = (long *)(local_230 & 0xfffffffffffffffe);
          plVar29 = plVar9 + 1;
          do {
            lVar12 = *plVar29;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar29,0x10);
            if (bVar4) {
              *(int *)plVar29 = (int)lVar12 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((plVar9 != (long *)0x0) && ((int)lVar12 == 1)) {
            (**(code **)(*plVar9 + 8))();
          }
        }
        if (iVar5 <= iVar30) break;
        local_238 = 0;
        local_230 = 0;
        local_248 = (undefined8 *)0x0;
        local_240 = 0;
        (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x50))
                  ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],&local_248);
        if (iVar30 < (int)local_238) {
          local_80 = (undefined8 *)((long)local_248 + (long)local_238._4_4_ * (long)iVar30);
          local_78 = local_240;
          local_70 = local_230;
          if ((local_230 & 1) != 0) {
            piVar1 = (int *)((local_230 & 0xfffffffffffffffe) + 8);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
        }
        else {
          local_78 = 0;
          local_70 = 0;
          local_80 = (undefined8 *)0x0;
        }
        if ((local_230 & 1) != 0) {
          plVar9 = (long *)(local_230 & 0xfffffffffffffffe);
          plVar29 = plVar9 + 1;
          do {
            lVar12 = *plVar29;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar29,0x10);
            if (bVar4) {
              *(int *)plVar29 = (int)lVar12 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((plVar9 != (long *)0x0) && ((int)lVar12 == 1)) {
            (**(code **)(*plVar9 + 8))();
          }
        }
        FUN_033b0858(param_1,&local_80,0,puVar28);
        if ((local_70 & 1) != 0) {
          plVar9 = (long *)(local_70 & 0xfffffffffffffffe);
          plVar29 = plVar9 + 1;
          do {
            lVar12 = *plVar29;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar29,0x10);
            if (bVar4) {
              *(int *)plVar29 = (int)lVar12 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((plVar9 != (long *)0x0) && ((int)lVar12 == 1)) {
            (**(code **)(*plVar9 + 8))();
          }
        }
        iVar30 = iVar30 + 1;
      }
    }
    *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + -1;
    FUN_033adeb8(*param_1,"</array>");
    if ((param_3 & 1) != 0) {
      *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + -1;
      FUN_033adeb8(*param_1,&DAT_03c886bc);
    }
    uVar18 = local_1a8;
    local_1a8 = local_1a8 & 0xffffffff00000000;
    if ((-1 < (long)uVar18) && (local_1b0 != (ulong *)0x0)) {
      (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
    }
    goto LAB_033b1a5c;
  default:
    local_108 = 0;
    local_118 = (ulong *)0x0;
    local_110 = PTR_DAT_047d1b38;
    FUN_01f9d9b0(0x261011c5,"../..\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h",
                 0x3c,"Bad var visitor switch",&local_118);
    return;
  }
  puVar17 = local_118;
  if ((param_3 & 1) == 0) {
    FUN_033adeb8(*param_1,&DAT_03c886bc);
  }
  puVar28 = (undefined8 *)*param_1;
  sVar7 = strlen((char *)puVar17);
  puVar14 = (ulong *)*puVar28;
  pvVar2 = (void *)*puVar14;
  uVar18 = (long)pvVar2 + (long)(int)sVar7;
  if (puVar14[1] < uVar18) {
    plVar29 = (long *)puVar14[6];
    if (plVar29 == (long *)0x0) {
      memcpy(pvVar2,puVar17,puVar14[1] - (long)pvVar2);
      *puVar14 = puVar14[1];
    }
    else {
      pcVar21 = *(code **)(*plVar29 + 0x30);
LAB_033b1a2c:
      (*pcVar21)(plVar29,puVar14,puVar17);
    }
  }
  else {
    memcpy(pvVar2,puVar17,(long)(int)sVar7);
    *puVar14 = uVar18;
  }
LAB_033b1a5c:
  puVar10 = local_110;
  local_110 = (undefined *)((ulong)local_110 & 0xffffffff00000000);
  if ((-1 < (long)puVar10) && (local_118 != (ulong *)0x0)) {
LAB_033b1a70:
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
  }
  return;
LAB_033b17bc:
  *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + -1;
  FUN_033adeb8(*param_1,"</record>");
  if ((param_3 & 1) != 0) {
    *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + -1;
    FUN_033adeb8(*param_1,&DAT_03c886bc);
  }
  goto LAB_033b1a5c;
}


