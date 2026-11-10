/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00352270; name: FUN_00352270
 */


char * FUN_00352270(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  bool bVar6;
  char *pcVar7;
  undefined8 uVar8;
  size_t sVar9;
  undefined *puVar10;
  void *__base;
  size_t __nmemb;
  undefined8 *puVar11;
  size_t sVar12;
  ulong uVar13;
  ulong uVar14;
  char cVar15;
  ulong uVar16;
  ulong local_78;
  ulong local_70;
  char *local_68;
  
  if (param_1 == 0) {
    pcVar7 = "\"No Error\"";
  }
  else if (param_1 == 4) {
    pcVar7 = "\"Cancelled\"";
  }
  else if (param_1 == 2) {
    pcVar7 = "\"Out of memory\"";
  }
  else {
    plVar1 = (long *)(param_1 + 8);
    pcVar7 = (char *)*plVar1;
    if ((char *)*plVar1 == (char *)0x0) {
      __base = (void *)0x0;
      __nmemb = 0;
      uVar13 = 0;
      uVar14 = 0;
      do {
        uVar16 = (ulong)*(byte *)(param_1 + uVar14 + 0x10);
        if (uVar16 != 0xff) {
          pcVar7 = "errno";
          switch(uVar14 & 0xffffffff) {
          case 0:
            break;
          case 1:
            pcVar7 = "file_line";
            break;
          case 2:
            pcVar7 = "stream_id";
            break;
          case 3:
            pcVar7 = "grpc_status";
            break;
          case 4:
            pcVar7 = "offset";
            break;
          case 5:
            pcVar7 = "index";
            break;
          case 6:
            pcVar7 = "size";
            break;
          case 7:
            pcVar7 = "http2_error";
            break;
          case 8:
            pcVar7 = "tsi_code";
            break;
          case 9:
            pcVar7 = "security_status";
            break;
          case 10:
            pcVar7 = "wsa_error";
            break;
          case 0xb:
            pcVar7 = "fd";
            break;
          case 0xc:
            pcVar7 = "http_status";
            break;
          case 0xd:
            pcVar7 = "limit";
            break;
          case 0xe:
            pcVar7 = "occurred_during_write";
            break;
          case 0xf:
            pcVar7 = "channel_connectivity_state";
            break;
          default:
            goto switchD_00352344_caseD_10;
          }
          uVar8 = FUN_0038ccb0(pcVar7);
          FUN_0038d930(&local_68,&DAT_03be62d5,*(undefined8 *)(param_1 + uVar16 * 8 + 0x38));
          pcVar7 = local_68;
          if (__nmemb == uVar13) {
            uVar13 = __nmemb * 3 >> 1;
            if (__nmemb * 3 < 10) {
              uVar13 = 4;
            }
            __base = (void *)FUN_0038c7f0(__base,uVar13 << 4);
          }
          puVar11 = (undefined8 *)((long)__base + __nmemb * 0x10);
          __nmemb = __nmemb + 1;
          *puVar11 = uVar8;
          puVar11[1] = pcVar7;
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 != 0x10);
      uVar14 = 0;
      do {
        uVar16 = (ulong)*(byte *)(param_1 + uVar14 + 0x20);
        if (uVar16 != 0xff) {
          pcVar7 = "key";
          switch(uVar14 & 0xffffffff) {
          case 0:
            pcVar7 = "description";
            break;
          case 1:
            pcVar7 = "file";
            break;
          case 2:
            pcVar7 = "os_error";
            break;
          case 3:
            pcVar7 = "syscall";
            break;
          case 4:
            pcVar7 = "target_address";
            break;
          case 5:
            pcVar7 = "grpc_message";
            break;
          case 6:
            pcVar7 = "raw_bytes";
            break;
          case 7:
            pcVar7 = "tsi_error";
            break;
          case 8:
            pcVar7 = "filename";
            break;
          case 9:
            pcVar7 = "queued_buffers";
            break;
          case 10:
            break;
          case 0xb:
            pcVar7 = "value";
            break;
          default:
switchD_00352344_caseD_10:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          uVar8 = FUN_0038ccb0(pcVar7);
          lVar3 = param_1 + uVar16 * 8;
          local_70 = 0;
          local_68 = (char *)0x0;
          local_78 = 0;
          bVar6 = *(long *)(lVar3 + 0x38) != 0;
          lVar4 = lVar3 + 0x41;
          if (bVar6) {
            lVar4 = *(long *)(lVar3 + 0x48);
          }
          uVar16 = *(ulong *)(lVar3 + 0x40) & 0xff;
          if (bVar6) {
            uVar16 = *(ulong *)(lVar3 + 0x40);
          }
          FUN_00352b70(lVar4,uVar16,&local_68,&local_70,&local_78);
          if (local_70 == local_78) {
            local_78 = 8;
            if (0xf < local_70 * 3) {
              local_78 = local_70 * 3 >> 1;
            }
            pcVar7 = (char *)FUN_0038c7f0(local_68);
            pcVar7[local_70] = '\0';
          }
          else {
            local_68[local_70] = '\0';
            pcVar7 = local_68;
          }
          local_68 = pcVar7;
          if (__nmemb == uVar13) {
            uVar13 = __nmemb * 3 >> 1;
            if (__nmemb * 3 < 10) {
              uVar13 = 4;
            }
            __base = (void *)FUN_0038c7f0(__base,uVar13 << 4);
          }
          puVar11 = (undefined8 *)((long)__base + __nmemb * 0x10);
          __nmemb = __nmemb + 1;
          *puVar11 = uVar8;
          puVar11[1] = pcVar7;
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 != 0xc);
      bVar5 = *(byte *)(param_1 + 0x2c);
      if ((ulong)bVar5 != 0xff) {
        uVar8 = FUN_0038ccb0("created");
        lVar3 = param_1 + (ulong)bVar5 * 8;
        lVar4 = *(long *)(lVar3 + 0x40);
        if ((uint)((ulong)lVar4 >> 0x20) < 4) {
          puVar10 = (&PTR_s__monotonic__044961c0)[lVar4 >> 0x20];
        }
        else {
          puVar10 = &DAT_03c68229;
        }
        FUN_0038d930(&local_68,"\"%s%ld.%09d\"",puVar10,*(undefined8 *)(lVar3 + 0x38));
        pcVar7 = local_68;
        if (__nmemb == uVar13) {
          uVar13 = __nmemb * 3 >> 1;
          if (__nmemb * 3 < 10) {
            uVar13 = 4;
          }
          __base = (void *)FUN_0038c7f0(__base,uVar13 << 4);
        }
        puVar11 = (undefined8 *)((long)__base + __nmemb * 0x10);
        __nmemb = __nmemb + 1;
        *puVar11 = uVar8;
        puVar11[1] = pcVar7;
      }
      if (*(char *)(param_1 + 0x2d) != -1) {
        uVar8 = FUN_0038ccb0("referenced_errors");
        local_78 = 8;
        local_68 = (char *)FUN_0038c7f0(0,8);
        local_70 = 1;
        *local_68 = '[';
        FUN_00353030(param_1,&local_68,&local_70,&local_78);
        uVar14 = local_70;
        if (local_70 == local_78) {
          uVar16 = 8;
          if (0xf < local_70 * 3) {
            uVar16 = local_70 * 3 >> 1;
          }
          local_78 = uVar16;
          local_68 = (char *)FUN_0038c7f0(local_68,uVar16);
        }
        else {
          uVar16 = local_78;
        }
        uVar2 = uVar14 + 1;
        local_68[uVar14] = ']';
        local_70 = uVar2;
        if (uVar2 == uVar16) {
          local_78 = 8;
          if (0xf < uVar16 * 3) {
            local_78 = uVar16 * 3 >> 1;
          }
          local_68 = (char *)FUN_0038c7f0();
        }
        pcVar7 = local_68;
        local_68[uVar2] = '\0';
        if (__nmemb == uVar13) {
          uVar14 = __nmemb * 0x18 & 0xfffffffffffffff0;
          if (__nmemb * 3 < 10) {
            uVar14 = 0x40;
          }
          __base = (void *)FUN_0038c7f0(__base,uVar14);
        }
        puVar11 = (undefined8 *)((long)__base + __nmemb * 0x10);
        __nmemb = __nmemb + 1;
        *puVar11 = uVar8;
        puVar11[1] = pcVar7;
      }
      qsort(__base,__nmemb,0x10,(__compar_fn_t)&LAB_00352a00);
      local_78 = 8;
      local_68 = (char *)FUN_0038c7f0(0,8);
      local_70 = 1;
      *local_68 = '{';
      if (__nmemb != 0) {
        sVar12 = 0;
        do {
          if (sVar12 != 0) {
            if (local_70 == local_78) {
              local_78 = 8;
              if (0xf < local_70 * 3) {
                local_78 = local_70 * 3 >> 1;
              }
              local_68 = (char *)FUN_0038c7f0(local_68);
            }
            local_68[local_70] = ',';
            local_70 = local_70 + 1;
          }
          pcVar7 = *(char **)((long)__base + sVar12 * 0x10);
          sVar9 = strlen(pcVar7);
          FUN_00352b70(pcVar7,sVar9,&local_68,&local_70,&local_78);
          free(*(void **)((long)__base + sVar12 * 0x10));
          if (local_70 == local_78) {
            local_78 = 8;
            if (0xf < local_70 * 3) {
              local_78 = local_70 * 3 >> 1;
            }
            local_68 = (char *)FUN_0038c7f0(local_68);
          }
          uVar14 = local_70 + 1;
          local_68[local_70] = ':';
          puVar11 = (undefined8 *)((long)__base + sVar12 * 0x10 + 8);
          pcVar7 = (char *)*puVar11;
          cVar15 = *pcVar7;
          local_70 = uVar14;
          if (cVar15 != '\0') {
            do {
              pcVar7 = pcVar7 + 1;
              if (local_70 == local_78) {
                local_78 = 8;
                if (0xf < local_70 * 3) {
                  local_78 = local_70 * 3 >> 1;
                }
                local_68 = (char *)FUN_0038c7f0(local_68);
              }
              uVar14 = local_70 + 1;
              local_68[local_70] = cVar15;
              cVar15 = *pcVar7;
              local_70 = uVar14;
            } while (cVar15 != '\0');
            pcVar7 = (char *)*puVar11;
          }
          free(pcVar7);
          sVar12 = sVar12 + 1;
        } while (sVar12 != __nmemb);
      }
      if (local_70 == local_78) {
        local_78 = 8;
        if (0xf < local_70 * 3) {
          local_78 = local_70 * 3 >> 1;
        }
        local_68 = (char *)FUN_0038c7f0(local_68);
        uVar14 = local_70;
      }
      else {
        uVar14 = local_70;
      }
      local_70 = uVar14 + 1;
      local_68[uVar14] = '}';
      if (local_70 == local_78) {
        local_78 = 8;
        if (0xf < local_70 * 3) {
          local_78 = local_70 * 3 >> 1;
        }
        local_68 = (char *)FUN_0038c7f0(local_68);
      }
      local_68[local_70] = '\0';
      local_70 = local_70 + 1;
      free(__base);
      do {
        if (*plVar1 != 0) {
          ClearExclusiveLocal();
          free(local_68);
          return (char *)*plVar1;
        }
        cVar15 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = (long)local_68;
          cVar15 = ExclusiveMonitorsStatus();
        }
        pcVar7 = local_68;
      } while (cVar15 != '\0');
    }
  }
  return pcVar7;
}


