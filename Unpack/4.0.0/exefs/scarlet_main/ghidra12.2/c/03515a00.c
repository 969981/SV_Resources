/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03515a00; name: FUN_03515a00
 */


void FUN_03515a00(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  byte bVar8;
  char *pcVar9;
  long *plVar10;
  
  puVar1 = PTR_DAT_047e2fd0;
  if (*(code **)PTR_DAT_047e2fd0 != (code *)0x0) {
    (**(code **)PTR_DAT_047e2fd0)();
  }
  nn::os::WaitEvent((EventType *)(param_1 + 0xa38));
  if (*(char *)(param_1 + 0xa60) == '\0') {
    bVar8 = 0;
    lVar7 = 0;
    do {
      do {
        pcVar9 = (char *)(param_1 + lVar7 + 8);
        if (*pcVar9 == '\x01') {
          bVar3 = FUN_03515e60(param_1 + lVar7 * 0x58 + 0x20);
          bVar3 = bVar8 | bVar3;
        }
        else {
          bVar3 = bVar8;
          if (*pcVar9 == '\x02') {
            plVar10 = (long *)(param_1 + lVar7 * 0x58 + 0x20);
            if ((long *)*plVar10 != (long *)0x0) {
              uVar4 = (**(code **)(*(long *)*plVar10 + 0x18))();
              if ((uVar4 & 1) != 0) {
                (**(code **)(*(long *)*plVar10 + 0x28))();
              }
              puVar5 = (undefined8 *)*plVar10;
              if (puVar5 != (undefined8 *)0x0) {
                (**(code **)*puVar5)(puVar5);
                (**(code **)(puVar1 + 0x30))(5,puVar5);
              }
              *plVar10 = 0;
            }
            plVar10 = (long *)(param_1 + lVar7 * 0x58 + 0x28);
            if (*plVar10 != 0) {
              (**(code **)(puVar1 + 0x30))(5);
              *plVar10 = 0;
            }
            plVar10 = (long *)(param_1 + lVar7 * 0x58 + 0x38);
            if (*plVar10 != 0) {
              (**(code **)(puVar1 + 0x30))(5);
              *plVar10 = 0;
            }
            lVar6 = param_1 + lVar7 * 0x58;
            plVar10 = (long *)(lVar6 + 0x50);
            *(undefined4 *)(lVar6 + 0x48) = 0;
            if (*plVar10 != 0) {
              (**(code **)(puVar1 + 0x30))(5);
              *plVar10 = 0;
            }
            *(undefined4 *)(param_1 + lVar7 * 0x58 + 0x60) = 0;
            *pcVar9 = '\0';
          }
        }
        bVar2 = lVar7 != 0x17;
        lVar6 = 0;
        if (bVar2) {
          lVar6 = lVar7 + 1;
        }
        bVar8 = bVar2 & bVar3;
        lVar7 = lVar6;
      } while ((bVar2) || ((bVar3 & 1) != 0));
      nn::os::WaitEvent((EventType *)(param_1 + 0xa38));
      lVar7 = 0;
      bVar8 = 0;
    } while (*(char *)(param_1 + 0xa60) == '\0');
  }
  if (*(code **)(puVar1 + 8) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03515b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar1 + 8))();
  return;
}


