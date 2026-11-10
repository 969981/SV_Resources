/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0182116c; name: FUN_0182116c
 */


void FUN_0182116c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long local_48;
  undefined8 uStack_40;
  undefined8 *local_38;
  long *local_28;
  undefined8 local_18;
  
  if (((DAT_04839790 & 1) == 0) &&
     (local_28 = param_1, local_18 = param_3, iVar1 = __cxa_guard_acquire(&DAT_04839790),
     param_1 = local_28, param_3 = local_18, iVar1 != 0)) {
    FUN_00100190(&LAB_00b1baa8,&DAT_04839780,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839790);
    param_1 = local_28;
    param_3 = local_18;
  }
  DAT_04839778 = DAT_04839780;
  if (DAT_04839780 == 0) {
    return;
  }
  lVar3 = *(long *)(DAT_04839780 + 0x4058);
  lVar5 = *(long *)(DAT_04839780 + 0x4060);
  if (lVar3 == lVar5) {
LAB_01821224:
    if ((lVar3 != lVar5) && (lVar3 = *(long *)(lVar3 + 0x70), lVar3 != 0)) {
      if ((*(long *)(lVar3 + 0x50) != 0) &&
         (lVar5 = *(long *)(*(long *)(lVar3 + 0x50) + 0x10), lVar5 != 0)) {
        lVar5 = lVar5 + -0x28;
        local_48 = lVar5;
        uStack_40 = param_2;
        local_18 = FUN_01ea75b4(&local_48);
        if ((local_18 & 0xff) != 0) {
          local_38 = &local_18;
          local_48 = lVar5;
          uStack_40 = param_3;
          uVar2 = FUN_01ea7638(&local_48);
          if ((uVar2 & 0xff) != 0) {
            uVar4 = (ulong)*(byte *)(lVar3 + 0x20c);
            if (uVar4 < 0x10) {
              if ((*(char *)(lVar3 + 0x14c) == '\0') || (*(uint *)(lVar3 + 0x150) != local_18._4_4_)
                 ) {
                if ((*(char *)(lVar3 + 0x158) == '\0') ||
                   (*(uint *)(lVar3 + 0x15c) != local_18._4_4_)) {
                  if ((*(char *)(lVar3 + 0x164) == '\0') ||
                     (*(uint *)(lVar3 + 0x168) != local_18._4_4_)) {
                    if ((*(char *)(lVar3 + 0x170) == '\0') ||
                       (*(uint *)(lVar3 + 0x174) != local_18._4_4_)) {
                      if ((*(char *)(lVar3 + 0x17c) == '\0') ||
                         (*(uint *)(lVar3 + 0x180) != local_18._4_4_)) {
                        if ((*(char *)(lVar3 + 0x188) == '\0') ||
                           (*(uint *)(lVar3 + 0x18c) != local_18._4_4_)) {
                          if ((*(char *)(lVar3 + 0x194) == '\0') ||
                             (*(uint *)(lVar3 + 0x198) != local_18._4_4_)) {
                            if ((*(char *)(lVar3 + 0x1a0) == '\0') ||
                               (*(uint *)(lVar3 + 0x1a4) != local_18._4_4_)) {
                              if ((*(char *)(lVar3 + 0x1ac) == '\0') ||
                                 (*(uint *)(lVar3 + 0x1b0) != local_18._4_4_)) {
                                if ((*(char *)(lVar3 + 0x1b8) == '\0') ||
                                   (*(uint *)(lVar3 + 0x1bc) != local_18._4_4_)) {
                                  if ((*(char *)(lVar3 + 0x1c4) == '\0') ||
                                     (*(uint *)(lVar3 + 0x1c8) != local_18._4_4_)) {
                                    if ((*(char *)(lVar3 + 0x1d0) == '\0') ||
                                       (*(uint *)(lVar3 + 0x1d4) != local_18._4_4_)) {
                                      if ((*(char *)(lVar3 + 0x1dc) == '\0') ||
                                         (*(uint *)(lVar3 + 0x1e0) != local_18._4_4_)) {
                                        if ((*(char *)(lVar3 + 0x1e8) == '\0') ||
                                           (*(uint *)(lVar3 + 0x1ec) != local_18._4_4_)) {
                                          if ((*(char *)(lVar3 + 500) == '\0') ||
                                             (*(uint *)(lVar3 + 0x1f8) != local_18._4_4_)) {
                                            if ((*(char *)(lVar3 + 0x200) == '\0') ||
                                               (*(uint *)(lVar3 + 0x204) != local_18._4_4_)) {
                                              *(byte *)(lVar3 + 0x20c) =
                                                   *(byte *)(lVar3 + 0x20c) + 1;
                                              lVar5 = lVar3 + uVar4 * 0xc;
                                              if (*(char *)(lVar5 + 0x14c) == '\0') {
                                                *(ulong *)(lVar3 + uVar4 * 0xc + 0x150) =
                                                     uVar2 & 0xffffffff00000000 |
                                                     (ulong)local_18._4_4_;
                                                *(undefined1 *)(lVar5 + 0x14c) = 1;
                                                return;
                                              }
                                              *(ulong *)(lVar3 + uVar4 * 0xc + 0x150) =
                                                   uVar2 & 0xffffffff00000000 |
                                                   (ulong)local_18._4_4_;
                                              return;
                                            }
                                            lVar3 = lVar3 + 0x200;
                                          }
                                          else {
                                            lVar3 = lVar3 + 500;
                                          }
                                        }
                                        else {
                                          lVar3 = lVar3 + 0x1e8;
                                        }
                                      }
                                      else {
                                        lVar3 = lVar3 + 0x1dc;
                                      }
                                    }
                                    else {
                                      lVar3 = lVar3 + 0x1d0;
                                    }
                                  }
                                  else {
                                    lVar3 = lVar3 + 0x1c4;
                                  }
                                }
                                else {
                                  lVar3 = lVar3 + 0x1b8;
                                }
                              }
                              else {
                                lVar3 = lVar3 + 0x1ac;
                              }
                            }
                            else {
                              lVar3 = lVar3 + 0x1a0;
                            }
                          }
                          else {
                            lVar3 = lVar3 + 0x194;
                          }
                        }
                        else {
                          lVar3 = lVar3 + 0x188;
                        }
                      }
                      else {
                        lVar3 = lVar3 + 0x17c;
                      }
                    }
                    else {
                      lVar3 = lVar3 + 0x170;
                    }
                  }
                  else {
                    lVar3 = lVar3 + 0x164;
                  }
                }
                else {
                  lVar3 = lVar3 + 0x158;
                }
              }
              else {
                lVar3 = lVar3 + 0x14c;
              }
              *(int *)(lVar3 + 8) = (int)(uVar2 >> 0x20);
            }
          }
        }
      }
      return;
    }
  }
  else {
    do {
      if (*(long *)(lVar3 + 8) == *param_1) goto LAB_01821224;
      lVar3 = lVar3 + 0xb0;
    } while (lVar5 != lVar3);
  }
  return;
}


