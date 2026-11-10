/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0026b8c8; name: FUN_0026b8c8
 */


void FUN_0026b8c8(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  byte *pbVar6;
  long *local_88;
  long lStack_80;
  ulong local_78;
  long *local_70;
  long lStack_68;
  ulong local_60;
  long *local_50;
  long lStack_48;
  ulong local_40;
  
  puVar2 = PTR_LAB_047cba48;
  lVar4 = param_1[2];
  uVar3 = *(ulong *)(lVar4 + 0x18);
  if (uVar3 < *(ulong *)(lVar4 + 8)) {
    do {
      plVar5 = *(long **)(*(long *)(lVar4 + 0x20) + uVar3 * 8);
      if (plVar5 != (long *)0x0) {
        if (plVar5 == *(long **)(*(long *)(lVar4 + 0x20) + (uVar3 ^ 1) * 8)) {
          plVar5 = *(long **)(*plVar5 + 0x20);
        }
        if (plVar5 != (long *)0x0) {
          puVar1 = PTR_DAT_047cc2c8 + 0x10;
          local_78 = uVar3;
          lStack_80 = lVar4;
          local_88 = plVar5;
          do {
            pbVar6 = (byte *)local_88[1];
            local_50 = local_88;
            lStack_48 = lStack_80;
            local_40 = local_78;
            FUN_002597f8(&local_88);
            lStack_68 = lStack_48;
            local_70 = local_50;
            local_60 = local_40;
            FUN_0025a790(param_1[2],&local_70);
            if ((pbVar6 != (byte *)0x0) && (*param_1 == 0)) {
              *(undefined **)(pbVar6 + 0x18) = puVar1;
              if (*(int *)(pbVar6 + 0x34) != 0) {
                FUN_002679fc();
              }
              if ((((*(ulong *)(pbVar6 + 0x20) & 1) != 0) &&
                  (plVar5 = (long *)(*(ulong *)(pbVar6 + 0x20) & 0xfffffffffffffffe), *plVar5 == 0))
                 && (plVar5 != (long *)0x0)) {
                if ((*(byte *)(plVar5 + 1) & 1) != 0) {
                  FUN_0049e790(puVar2,plVar5[3]);
                }
                FUN_0049e790(puVar2,plVar5);
              }
              if ((*pbVar6 & 1) != 0) {
                FUN_0049e790(puVar2,*(undefined8 *)(pbVar6 + 0x10));
              }
              FUN_0049e790(puVar2,pbVar6);
            }
          } while (local_88 != (long *)0x0);
        }
        break;
      }
      uVar3 = uVar3 + 1;
    } while (*(ulong *)(lVar4 + 8) != uVar3);
  }
  if ((*param_1 == 0) && (lVar4 = param_1[2], lVar4 != 0)) {
    if ((*(long *)(lVar4 + 0x20) != 0) && (FUN_0026bcbc(lVar4), *(long *)(lVar4 + 0x28) == 0)) {
      FUN_0049e700(*(undefined8 *)(lVar4 + 0x20));
    }
    FUN_0049e790(PTR_LAB_047cba48,lVar4);
  }
  return;
}


