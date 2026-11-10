/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01022f34; name: FUN_01022f34
 */


void FUN_01022f34(long param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  int iVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  float extraout_s0;
  float extraout_var;
  float extraout_var_00;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  undefined1 local_68;
  undefined7 uStack_67;
  char local_60;
  ulong local_58;
  ulong uStack_50;
  uint local_48;
  undefined4 uStack_44;
  undefined1 local_24 [4];
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x40));
  uVar4 = *param_2;
  if (uVar4 != 0) {
    FUN_00cbc2e4(uVar4,uVar4 + 0x90);
    local_48 = (uint)param_2[1];
    uStack_50 = *param_2;
    local_58 = (long)(extraout_s0 * 100.0) + 500000U | (ulong)local_48 << 0x3b |
               (long)(extraout_var * 100.0) * 0x100000 + 0x3d09000000U |
               ((long)(extraout_var_00 * 100.0) << 0x27) + 0x3d0900000000000U;
    local_60 = '\x01';
    puVar6 = *(ulong **)(param_1 + 0x118);
    puVar2 = *(ulong **)(param_1 + 0x120);
    if ((puVar6 != puVar2) && (puVar6[1] != uStack_50)) {
      do {
        puVar5 = puVar6 + 4;
        if (puVar2 == puVar5) {
          puVar6 = puVar2;
          break;
        }
        puVar1 = puVar6 + 5;
        puVar6 = puVar5;
      } while (*puVar1 != uStack_50);
    }
    if (puVar2 == puVar6) {
      lVar8 = *(long *)(param_1 + 0xe0);
      lVar7 = *(long *)(param_1 + 0xe8);
      if ((lVar8 != lVar7) && (*(ulong *)(lVar8 + 8) != uStack_50)) {
        do {
          lVar9 = lVar8 + 0x18;
          if (lVar7 == lVar9) {
            lVar8 = lVar7;
            break;
          }
          puVar6 = (ulong *)(lVar8 + 0x20);
          lVar8 = lVar9;
        } while (*puVar6 != uStack_50);
      }
      if (lVar7 == lVar8) {
        if (*(long *)(param_1 + 0x60) == 0) {
          FUN_0102321c((long *)(param_1 + 0xe0),&local_58);
          if (DAT_04839a50 != (code *)0x0) {
            local_80 = *param_2;
            uStack_78 = param_2[1];
            local_24[0] = 1;
            (*DAT_04839a50)(&DAT_04839a70,&local_80,local_24);
          }
        }
        else {
          local_68 = 0;
          local_70 = CONCAT44(uStack_44,local_48);
          local_80 = local_58;
          uStack_78 = uStack_50;
          if (puVar2 < *(ulong **)(param_1 + 0x128)) {
            uVar10 = *(undefined8 *)(param_1 + 0x130);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar8 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar8 == 0) {
              *puVar2 = local_80;
              puVar2[1] = uStack_78;
              puVar2[2] = local_70;
              puVar2[3] = CONCAT71(uStack_67,local_68);
              *(ulong **)(param_1 + 0x120) = puVar2 + 4;
            }
            else {
              if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar10;
              *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
              puVar2[2] = local_70;
              puVar2[3] = CONCAT71(uStack_67,local_68);
              *puVar2 = local_80;
              puVar2[1] = uStack_78;
              *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
              *(ulong **)(param_1 + 0x120) = puVar2 + 4;
              if (local_60 == '\0') goto LAB_010230b8;
            }
          }
          else {
            FUN_0102395c(param_1 + 0x118,&local_80);
          }
        }
      }
      else if (DAT_04839a50 != (code *)0x0) {
        uStack_78 = param_2[1];
        local_24[0] = 1;
        local_80 = uStack_50;
        (*DAT_04839a50)(&DAT_04839a70,&local_80,local_24);
      }
    }
  }
  local_60 = '\0';
LAB_010230b8:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x40));
  return;
}


