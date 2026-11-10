/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018b7350; name: FUN_018b7350
 */


void FUN_018b7350(undefined8 *param_1,long param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  void *__src;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  void *__dest;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 local_148;
  long *local_140;
  ulong local_138;
  long *local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  long *local_c0;
  char local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  void *local_98;
  void *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined2 local_70;
  long local_68;
  undefined1 auStack_60 [16];
  
  plVar9 = (long *)(param_2 + 0x120);
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar9 == 0) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar2) {
      *plVar9 = lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_018b7394;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x128));
  do {
    if (*plVar9 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x128));
        while (*plVar9 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar2) {
            *plVar9 = lVar4;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_018b7394;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar2) {
      *plVar9 = lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_018b7394:
  FUN_0135d328(auStack_60,param_3,0);
  local_c0 = (long *)0x0;
  local_b0 = 0x400;
  uStack_a8 = 8;
  local_b8 = '\0';
  local_68 = 0;
  local_80 = 0;
  uStack_78 = 1;
  local_70 = 0x100;
  local_a0 = 0;
  local_98 = (void *)0x0;
  local_90 = (void *)0x0;
  uStack_88 = 0;
  local_128 = *(undefined4 *)(param_2 + 0x394);
  uStack_124 = *(undefined4 *)(param_2 + 0x390);
  local_120 = *(undefined4 *)(param_2 + 0x39c);
  memset(&local_11c,0,0x5c);
  plVar7 = *(long **)(param_2 + 0x138);
  plVar8 = *(long **)(param_2 + 0x140);
  plVar9 = plVar7;
  if (plVar7 == plVar8) {
LAB_018b7440:
    if (plVar9 != plVar8) {
      uVar10 = FUN_0132a414(*plVar9);
      local_11c = (undefined4)uVar10;
      if ((uVar10 & 0xff00000000) == 0) {
        local_11c = 0xffffffff;
      }
      plVar7 = *(long **)(param_2 + 0x138);
      plVar8 = *(long **)(param_2 + 0x140);
    }
  }
  else {
    do {
      if (*(long *)(*plVar9 + 0x70) == 0x19b607274a2a575a) goto LAB_018b7440;
      plVar9 = plVar9 + 1;
    } while (plVar8 != plVar9);
  }
  if (plVar7 != plVar8) {
    plVar9 = plVar7;
    do {
      if (*(long *)(*plVar9 + 0x70) == -0x195efed8d283e58f) {
        if (plVar8 != plVar9) {
          uVar10 = FUN_0132a414();
          local_118 = (undefined4)uVar10;
          if ((uVar10 & 0xff00000000) == 0) {
            local_118 = 0xffffffff;
          }
          plVar7 = *(long **)(param_2 + 0x138);
          plVar8 = *(long **)(param_2 + 0x140);
        }
        break;
      }
      plVar9 = plVar9 + 1;
    } while (plVar8 != plVar9);
    if (plVar7 != plVar8) {
      plVar9 = plVar7;
      do {
        if (*(long *)(*plVar9 + 0x70) == -0x56830dd8f54a859c) {
          if (plVar8 != plVar9) {
            uVar10 = FUN_0132a414();
            local_114 = (undefined4)uVar10;
            if ((uVar10 & 0xff00000000) == 0) {
              local_114 = 0xffffffff;
            }
            plVar7 = *(long **)(param_2 + 0x138);
            plVar8 = *(long **)(param_2 + 0x140);
          }
          break;
        }
        plVar9 = plVar9 + 1;
      } while (plVar8 != plVar9);
      if (plVar7 != plVar8) {
        plVar9 = plVar7;
        do {
          if (*(long *)(*plVar9 + 0x70) == 0x19860b274a013a64) {
            if (plVar8 != plVar9) {
              uVar10 = FUN_0132a414();
              local_110 = (undefined4)uVar10;
              if ((uVar10 & 0xff00000000) == 0) {
                local_110 = 0xffffffff;
              }
              plVar7 = *(long **)(param_2 + 0x138);
              plVar8 = *(long **)(param_2 + 0x140);
            }
            break;
          }
          plVar9 = plVar9 + 1;
        } while (plVar8 != plVar9);
        if (plVar7 != plVar8) {
          plVar9 = plVar7;
          do {
            if (*(long *)(*plVar9 + 0x70) == -0x449dbcd8eafdff88) {
              if (plVar8 != plVar9) {
                uVar10 = FUN_0132a414();
                local_10c = (undefined4)uVar10;
                if ((uVar10 & 0xff00000000) == 0) {
                  local_10c = 0xffffffff;
                }
                plVar7 = *(long **)(param_2 + 0x138);
                plVar8 = *(long **)(param_2 + 0x140);
              }
              break;
            }
            plVar9 = plVar9 + 1;
          } while (plVar8 != plVar9);
          if (plVar7 != plVar8) {
            plVar9 = plVar7;
            do {
              if (*(long *)(*plVar9 + 0x70) == -0x4bdef8d8eeb3ea20) {
                if (plVar8 != plVar9) {
                  uVar10 = FUN_0132a414();
                  local_108 = (undefined4)uVar10;
                  if ((uVar10 & 0xff00000000) == 0) {
                    local_108 = 0xffffffff;
                  }
                  plVar7 = *(long **)(param_2 + 0x138);
                  plVar8 = *(long **)(param_2 + 0x140);
                }
                break;
              }
              plVar9 = plVar9 + 1;
            } while (plVar8 != plVar9);
            if (plVar7 != plVar8) {
              plVar9 = plVar7;
              do {
                if (*(long *)(*plVar9 + 0x70) == -0x3d03a2d8e6fc25e0) {
                  if (plVar8 != plVar9) {
                    uVar10 = FUN_0132a414();
                    local_104 = (undefined4)uVar10;
                    if ((uVar10 & 0xff00000000) == 0) {
                      local_104 = 0xffffffff;
                    }
                    plVar7 = *(long **)(param_2 + 0x138);
                    plVar8 = *(long **)(param_2 + 0x140);
                  }
                  break;
                }
                plVar9 = plVar9 + 1;
              } while (plVar8 != plVar9);
              do {
                if (plVar7 == plVar8) break;
                if (*(long *)(*plVar7 + 0x70) == -0x72bacd8c7f53c77) {
                  if (plVar8 != plVar7) {
                    uVar10 = FUN_0132a414();
                    local_100 = (undefined4)uVar10;
                    if ((uVar10 & 0xff00000000) == 0) {
                      local_100 = 0xffffffff;
                    }
                  }
                  break;
                }
                plVar7 = plVar7 + 1;
              } while( true );
            }
          }
        }
      }
    }
  }
  local_148 = 0xa2126f096beabc04;
  local_140 = (long *)0x3c98f4f;
  local_138 = 9;
  local_130 = (long *)0x0;
  local_fc = FUN_018b7d08(*(undefined8 *)(param_2 + 0x498),&local_148);
  if (local_130 != (long *)0x0) {
    (**(code **)(*local_130 + 0x20))();
  }
  local_148 = 0xd636339966dee21a;
  local_140 = (long *)&DAT_03c1a841;
  local_138 = 4;
  local_130 = (long *)0x0;
  local_f8 = FUN_018b7d08(*(undefined8 *)(param_2 + 0x498),&local_148);
  if (local_130 != (long *)0x0) {
    (**(code **)(*local_130 + 0x20))();
  }
  local_148 = 0x9f348a9a6a8de1a;
  local_140 = (long *)0x3c05315;
  local_138 = 0xb;
  local_130 = (long *)0x0;
  local_f4 = FUN_018b7d08(*(undefined8 *)(param_2 + 0x498),&local_148);
  if (local_130 != (long *)0x0) {
    (**(code **)(*local_130 + 0x20))();
  }
  local_148 = 0x320968092c9f1a9a;
  local_140 = (long *)0x3c5ebf2;
  local_138 = 9;
  local_130 = (long *)0x0;
  local_f0 = FUN_018b7d08(*(undefined8 *)(param_2 + 0x498),&local_148);
  if (local_130 != (long *)0x0) {
    (**(code **)(*local_130 + 0x20))();
  }
  local_148 = 0x88626aa2d7bf9394;
  local_140 = (long *)0x3c1372f;
  local_138 = 9;
  local_130 = (long *)0x0;
  local_ec = FUN_018b7d08(*(undefined8 *)(param_2 + 0x498),&local_148);
  if (local_130 != (long *)0x0) {
    (**(code **)(*local_130 + 0x20))();
  }
  local_148 = 0x14b123ca0436bac0;
  local_140 = (long *)0x3ca0ce0;
  local_138 = 0xd;
  local_130 = (long *)0x0;
  local_e8 = FUN_018b7d08(*(undefined8 *)(param_2 + 0x498),&local_148);
  if (local_130 != (long *)0x0) {
    (**(code **)(*local_130 + 0x20))();
  }
  local_148 = 0x236e2c46bca7c58d;
  local_140 = (long *)0x3c93a99;
  local_138 = 0xe;
  local_130 = (long *)0x0;
  local_e4 = FUN_018b7d08(*(undefined8 *)(param_2 + 0x498),&local_148);
  if (local_130 != (long *)0x0) {
    (**(code **)(*local_130 + 0x20))();
  }
  local_148 = 0x47be5e4a33151278;
  local_140 = (long *)0x3ca7f7f;
  local_138 = 10;
  local_130 = (long *)0x0;
  local_e0 = FUN_018b7d08(*(undefined8 *)(param_2 + 0x498),&local_148);
  if (local_130 != (long *)0x0) {
    (**(code **)(*local_130 + 0x20))();
  }
  local_148 = 0xe4827ab584caedcc;
  local_140 = (long *)0x3bd61ed;
  local_138 = 0xd;
  local_130 = (long *)0x0;
  local_dc = FUN_018b7d08(*(undefined8 *)(param_2 + 0x498),&local_148);
  if (local_130 != (long *)0x0) {
    (**(code **)(*local_130 + 0x20))();
  }
  local_148 = 0x7dd7bc0956f28b42;
  local_140 = (long *)0x3c51de7;
  local_138 = 9;
  local_130 = (long *)0x0;
  local_d8 = FUN_018b7d08(*(undefined8 *)(param_2 + 0x498),&local_148);
  if (local_130 != (long *)0x0) {
    (**(code **)(*local_130 + 0x20))();
  }
  local_148 = 0x9061f2a832f1aaa2;
  local_140 = (long *)0x3c7f901;
  local_138 = 0xd;
  local_130 = (long *)0x0;
  local_d4 = FUN_018b7d08(*(undefined8 *)(param_2 + 0x498),&local_148);
  if (local_130 != (long *)0x0) {
    (**(code **)(*local_130 + 0x20))();
  }
  local_148 = 0xc47a6bbd4598874e;
  local_140 = (long *)0x3c0c69f;
  local_138 = 0xd;
  local_130 = (long *)0x0;
  local_d0 = FUN_018b7d08(*(undefined8 *)(param_2 + 0x498),&local_148);
  if (local_130 != (long *)0x0) {
    (**(code **)(*local_130 + 0x20))();
  }
  local_148 = 0x5c463c353242eb3b;
  local_140 = (long *)0x3c8cebd;
  local_138 = 0xe;
  local_130 = (long *)0x0;
  local_cc = FUN_018b7d08(*(undefined8 *)(param_2 + 0x498),&local_148);
  if (local_130 != (long *)0x0) {
    (**(code **)(*local_130 + 0x20))();
  }
  uVar5 = FUN_018b7e80(&local_c0,&local_128);
  FUN_01692868(&local_c0,uVar5,0,1);
  __src = local_90;
  uVar10 = (ulong)(uint)(((int)local_a0 - (int)local_90) + (int)local_98);
  __dest = (void *)(**(code **)(*param_3 + 0x10))(param_3,uVar10,8);
  local_130 = (long *)0x8;
  local_140 = param_3;
  local_138 = uVar10;
  memcpy(__dest,__src,uVar10);
  *param_1 = __dest;
  param_1[1] = local_140;
  local_148 = 0;
  param_1[4] = uVar10;
  param_1[2] = local_138;
  param_1[3] = local_130;
  FUN_018b7ecc(&local_148);
  lVar4 = local_68;
  if (local_68 != 0) {
    FUN_01f2d540(local_68,*(undefined8 *)(local_68 + 8));
    lVar6 = tpidr_el0;
    plVar9 = *(long **)(lVar6 + 0x30);
    if (plVar9 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar9 = DAT_04859430;
      *(long **)(lVar6 + 0x30) = DAT_04859430;
    }
    uVar10 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar10 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar4,0,8);
    }
    else {
      FUN_00c48fe8(plVar9,lVar4,0,8);
    }
  }
  if (local_98 != (void *)0x0) {
    if (local_c0 == (long *)0x0) {
      operator_delete__(local_98);
    }
    else {
      (**(code **)(*local_c0 + 0x18))(local_c0,local_98,local_a0);
    }
  }
  local_98 = (void *)0x0;
  if ((local_b8 != '\0') && (local_c0 != (long *)0x0)) {
    (**(code **)(*local_c0 + 8))();
  }
  FUN_0135d2ec(auStack_60);
  *(undefined8 *)(param_2 + 0x120) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x128));
  return;
}


