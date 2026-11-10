/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f002b8; name: FUN_02f002b8
 */


void FUN_02f002b8(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if (*(int *)(param_1 + 0xb4) == 0) {
    FUN_02f004bc(param_1,param_1 + 0x90,param_1 + 0xb0);
  }
  puVar3 = PTR_DAT_047d19f0;
  lVar9 = 0;
  plVar1 = (long *)(param_1 + 0x48);
  do {
    lVar6 = *(long *)((long)plVar1 + lVar9);
    lVar2 = 0;
    if (lVar6 != 0) {
      lVar2 = lVar6 + (long)plVar1 + lVar9;
    }
    lVar6 = (**(code **)(*(long *)puVar3 + (ulong)*(byte *)(lVar2 + 0x18) * 0x200 + 0x48))(lVar2);
    if (lVar6 != 0) {
      if (lVar9 != 0) {
        lVar6 = 0;
        if (*plVar1 != 0) {
          lVar6 = *plVar1 + (long)plVar1;
        }
        bVar4 = lVar2 == lVar6;
        if (lVar9 != 8) {
          lVar7 = *(long *)(param_1 + 0x50);
          lVar8 = 0;
          if (lVar7 != 0) {
            lVar8 = lVar7 + param_1 + 0x50;
          }
          bVar4 = lVar2 == lVar6 || lVar2 == lVar8;
          if (lVar9 != 0x10) {
            lVar8 = *(long *)(param_1 + 0x58);
            lVar6 = 0;
            if (lVar8 != 0) {
              lVar6 = lVar8 + param_1 + 0x58;
            }
            bVar4 = bVar4 || lVar2 == lVar6;
            if (lVar9 != 0x18) {
              lVar8 = *(long *)(param_1 + 0x60);
              lVar6 = 0;
              if (lVar8 != 0) {
                lVar6 = lVar8 + param_1 + 0x60;
              }
              bVar4 = bVar4 || lVar2 == lVar6;
              if (lVar9 != 0x20) {
                lVar8 = *(long *)(param_1 + 0x68);
                lVar6 = 0;
                if (lVar8 != 0) {
                  lVar6 = lVar8 + param_1 + 0x68;
                }
                bVar4 = bVar4 || lVar2 == lVar6;
                if (lVar9 != 0x28) {
                  lVar8 = *(long *)(param_1 + 0x70);
                  lVar6 = 0;
                  if (lVar8 != 0) {
                    lVar6 = lVar8 + param_1 + 0x70;
                  }
                  bVar4 = bVar4 || lVar2 == lVar6;
                  if (lVar9 != 0x30) {
                    lVar8 = *(long *)(param_1 + 0x78);
                    lVar6 = 0;
                    if (lVar8 != 0) {
                      lVar6 = lVar8 + param_1 + 0x78;
                    }
                    bVar4 = bVar4 || lVar2 == lVar6;
                  }
                }
              }
            }
          }
        }
        if (bVar4) goto LAB_02f00490;
      }
      uVar5 = (**(code **)(*(long *)puVar3 + (ulong)*(byte *)(lVar2 + 0x18) * 0x200 + 0x48))(lVar2);
      FUN_02f00b24(uVar5,param_1,FUN_02f00be0,0);
    }
LAB_02f00490:
    lVar9 = lVar9 + 8;
    if (lVar9 == 0x40) {
      return;
    }
  } while( true );
}


