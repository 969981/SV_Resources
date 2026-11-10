/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031d4e54; name: FUN_031d4e54
 */


undefined8 FUN_031d4e54(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  char *pcVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  ThreadType *pTVar9;
  size_t sVar10;
  undefined8 uVar11;
  byte *pbVar12;
  ulong *puVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  ulong *puVar19;
  char *pcVar20;
  ulong uVar21;
  long lVar22;
  char *local_250;
  ulong local_248;
  undefined8 *local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  char *local_228;
  undefined8 local_220;
  char *local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  char local_200 [256];
  undefined8 *local_100;
  undefined8 local_f8;
  undefined8 local_f0 [16];
  char *local_70 [2];
  
  lVar7 = FUN_031d4cac();
  if (lVar7 != 0) {
    FUN_031c6c18(param_3,&DAT_03bf359a,lVar7);
    return *param_3;
  }
  puVar15 = (undefined8 *)(param_1 + 8);
  pbVar12 = (byte *)*puVar15;
  pbVar14 = pbVar12;
  if ((*pbVar12 & 1) == 0) {
    do {
      pbVar14 = *(byte **)(pbVar14 + 8);
    } while ((*pbVar14 & 1) == 0);
  }
  if (pbVar12 == (byte *)0x0) {
    return 0;
  }
  if ((*(ulong *)(pbVar14 + 0x10) & 0x1f) != 4) {
    return 0;
  }
  pbVar14 = (byte *)param_2[1];
  if (pbVar14 == (byte *)0x0) {
LAB_031d4f70:
    uVar18 = 0;
    uVar11 = 0;
  }
  else {
    pbVar12 = pbVar14;
    if ((*pbVar14 & 1) == 0) {
      do {
        pbVar12 = *(byte **)(pbVar12 + 8);
      } while ((*pbVar12 & 1) == 0);
    }
    if ((*(ulong *)(pbVar12 + 0x10) & 0x1f) != 4) {
      pbVar14 = (byte *)0x0;
      goto LAB_031d4f70;
    }
    uVar11 = *param_2;
    uVar18 = param_2[2];
    if ((uVar18 & 1) != 0) {
      piVar1 = (int *)((uVar18 & 0xfffffffffffffffe) + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      uVar18 = param_2[2];
    }
  }
  local_250 = (char *)0x0;
  plVar16 = (long *)(uVar18 & 0xfffffffffffffffe);
  local_248 = local_248 & 0xffffffffffffff00;
  (**(code **)(*plVar16 + 0x38))(plVar16,uVar11,pbVar14,&local_250);
  local_70[0] = (char *)-(long)local_250;
  if ((char)local_248 == '\0') {
    local_70[0] = local_250;
  }
  if ((uVar18 & 1) != 0) {
    plVar8 = plVar16 + 1;
    do {
      lVar7 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *(int *)plVar8 = (int)lVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((plVar16 != (long *)0x0) && ((int)lVar7 == 1)) {
      (**(code **)(*plVar16 + 8))(plVar16);
    }
  }
  if (local_70[0] == (char *)0x0) {
    return 0;
  }
  local_100 = local_f0;
  local_f8 = -0x7ffffff000000000;
  if (*(int *)(param_1 + 0x10) < 1) {
    pcVar20 = (char *)0x0;
  }
  else {
    lVar7 = 0;
    pcVar20 = (char *)0x0;
    puVar2 = PTR_PTR_047d1a50 + 0x20;
    do {
      lVar17 = *(long *)(*(long *)(param_1 + 0x20) + lVar7 * 8);
      puVar19 = *(ulong **)(param_1 + 8);
      if (puVar19 != (ulong *)0x0) {
        puVar13 = puVar19;
        do {
          uVar18 = *puVar13;
          if (((uint)uVar18 >> 2 & 1) != 0) {
            uVar18 = puVar13[(uVar18 >> 1 & 1) + (uVar18 & 1) + 2];
            if ((uVar18 & 1) != 0) {
              piVar1 = (int *)((uVar18 & 0xfffffffffffffffe) + 8);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar6) {
                  *piVar1 = *piVar1 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            goto LAB_031d5074;
          }
          puVar13 = (ulong *)puVar13[1];
        } while (puVar13 != (ulong *)0x0);
      }
      uVar18 = 0;
LAB_031d5074:
      if (puVar19 == (ulong *)0x0) {
LAB_031d50c4:
        if ((uVar18 & 1) != 0) {
          lVar17 = 0;
          puVar19 = (ulong *)0x0;
          uVar21 = 0;
LAB_031d50d8:
          plVar8 = (long *)(uVar18 & 0xfffffffffffffffe);
          plVar16 = plVar8 + 1;
          do {
            lVar22 = *plVar16;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar6) {
              *(int *)plVar16 = (int)lVar22 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((plVar8 != (long *)0x0) && ((int)lVar22 == 1)) {
            (**(code **)(*plVar8 + 8))();
          }
          goto LAB_031d5104;
        }
      }
      else {
        puVar13 = puVar19;
        if ((*puVar19 & 1) == 0) {
          do {
            puVar13 = (ulong *)puVar13[1];
          } while ((*puVar13 & 1) == 0);
        }
        if ((puVar13[2] & 0x1f) != 4) goto LAB_031d50c4;
        uVar21 = uVar18;
        if ((uVar18 & 1) != 0) {
          piVar1 = (int *)((uVar18 & 0xfffffffffffffffe) + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = *piVar1 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          goto LAB_031d50d8;
        }
LAB_031d5104:
        if (lVar17 != 0) {
          local_250 = (char *)0x0;
          local_248 = local_248 & 0xffffffffffffff00;
          (**(code **)(*(long *)(uVar21 & 0xfffffffffffffffe) + 0x38))
                    ((long *)(uVar21 & 0xfffffffffffffffe),lVar17,puVar19,&local_250);
          pcVar4 = (char *)-(long)local_250;
          if ((char)local_248 == '\0') {
            pcVar4 = local_250;
          }
          if (((ulong)pcVar4 & ((ulong)local_70[0] ^ 0xffffffffffffffff)) == 0) {
            lVar17 = (long)(int)local_f8;
            lVar22 = *(long *)(param_1 + 0x18);
            if ((int)(local_f8._4_4_ & 0x7fffffff) <= (int)local_f8) {
              FUN_031b108c(&local_100,puVar2,lVar17 + 1);
            }
            pcVar20 = (char *)((ulong)pcVar4 | (ulong)pcVar20);
            local_100[(int)local_f8] = *(undefined8 *)(lVar22 + lVar7 * 8);
            local_f8 = CONCAT44(local_f8._4_4_,(int)(lVar17 + 1));
          }
        }
        if ((uVar21 & 1) != 0) {
          plVar8 = (long *)(uVar21 & 0xfffffffffffffffe);
          plVar16 = plVar8 + 1;
          do {
            lVar17 = *plVar16;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar6) {
              *(int *)plVar16 = (int)lVar17 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((plVar8 != (long *)0x0) && ((int)lVar17 == 1)) {
            (**(code **)(*plVar8 + 8))();
          }
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_1 + 0x10));
  }
  if (pcVar20 == local_70[0]) goto LAB_031d528c;
  if (DAT_048841e0 < 2) {
    if (DAT_046aaf68 == '\0') goto LAB_031d528c;
LAB_031d5354:
    local_240 = &DAT_04884190;
    uStack_238 = 2;
    pTVar9 = (ThreadType *)nn::os::GetCurrentThread();
    local_230 = nn::os::GetThreadId(pTVar9);
    local_220 = 0;
    local_218 = (char *)0x0;
    local_210 = 0;
    uStack_208 = 0;
    local_248 = 0x10000000000;
    local_200[0] = '\0';
    local_250 = local_200;
    local_228 = local_200;
    FUN_0322c554(&local_250,"Unmatched bits while decoding {}, value {}",PTR_DAT_047e5b38,puVar15,
                 local_70);
    local_218 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Attributes/hkAttributes.cpp"
    ;
    local_210 = 0x8e;
    if (local_200[0] != '\0') {
      sVar10 = strlen(local_200);
      (local_200 + (int)((int)sVar10 - (uint)((int)sVar10 == 0xff)))[0] = '\n';
      (local_200 + (int)((int)sVar10 - (uint)((int)sVar10 == 0xff)))[1] = '\0';
      printf("%s",local_200);
      fflush(*(FILE **)PTR_stdout_047cb860);
    }
  }
  else {
    if (DAT_046aaf68 != '\0') goto LAB_031d5354;
    local_250 = (char *)0x0;
    local_240 = &DAT_04884190;
    uStack_238 = 2;
    pTVar9 = (ThreadType *)nn::os::GetCurrentThread();
    local_230 = nn::os::GetThreadId(pTVar9);
    local_228 = (char *)0x0;
    local_220 = 0;
    local_218 = (char *)0x0;
    local_210 = 0;
    uStack_208 = 0;
    FUN_0322c554(&local_250,"Unmatched bits while decoding {}, value {}",PTR_DAT_047e5b38,puVar15,
                 local_70);
    local_218 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Attributes/hkAttributes.cpp"
    ;
    local_210 = 0x8e;
    FUN_0322c8e0(&local_250);
  }
  if (((ulong)local_228 & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_228 + -1,0);
  }
LAB_031d528c:
  puVar15 = local_100;
  if ((int)local_f8 == 0) {
    uVar11 = 0;
  }
  else {
    if ((int)local_f8 == 1) {
      FUN_031c6afc(param_3,*local_100,0xffffffff);
    }
    else {
      puVar3 = local_100 + (int)local_f8;
      if ((*(uint *)((long)param_3 + 0xc) & 0x7fffffff) == 0) {
        FUN_030b4a20(param_3,PTR_PTR_047d1a50 + 0x20,1);
      }
      if (*(int *)(param_3 + 1) != 1) {
        *(undefined4 *)(param_3 + 1) = 1;
      }
      *(undefined1 *)*param_3 = 0;
      FUN_031c71e0(param_3,&DAT_03bff754,puVar15,puVar3);
    }
    uVar11 = *param_3;
  }
  lVar7 = local_f8;
  uVar18 = (ulong)local_f8._4_4_;
  local_f8 = (ulong)local_f8._4_4_ << 0x20;
  if ((-1 < lVar7) && (local_100 != (undefined8 *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_100,uVar18 << 3);
  }
  return uVar11;
}


