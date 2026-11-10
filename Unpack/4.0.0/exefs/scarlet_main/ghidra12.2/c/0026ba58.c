/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0026ba58; name: FUN_0026ba58
 */


void FUN_0026ba58(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte *pbVar3;
  long *plVar4;
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
  lStack_80 = param_1[2];
  local_78 = *(ulong *)(lStack_80 + 0x18);
  if (local_78 < *(ulong *)(lStack_80 + 8)) {
    do {
      local_88 = *(long **)(*(long *)(lStack_80 + 0x20) + local_78 * 8);
      if (local_88 != (long *)0x0) {
        if (local_88 == *(long **)(*(long *)(lStack_80 + 0x20) + (local_78 ^ 1) * 8)) {
          local_88 = *(long **)(*local_88 + 0x20);
        }
        if (local_88 == (long *)0x0) {
          return;
        }
        puVar1 = PTR_DAT_047cc2c8 + 0x10;
        do {
          pbVar3 = (byte *)local_88[1];
          local_50 = local_88;
          lStack_48 = lStack_80;
          local_40 = local_78;
          FUN_002597f8(&local_88);
          lStack_68 = lStack_48;
          local_70 = local_50;
          local_60 = local_40;
          FUN_0025a790(param_1[2],&local_70);
          if ((pbVar3 != (byte *)0x0) && (*param_1 == 0)) {
            *(undefined **)(pbVar3 + 0x18) = puVar1;
            if (*(int *)(pbVar3 + 0x34) != 0) {
              FUN_002679fc();
            }
            if ((((*(ulong *)(pbVar3 + 0x20) & 1) != 0) &&
                (plVar4 = (long *)(*(ulong *)(pbVar3 + 0x20) & 0xfffffffffffffffe), *plVar4 == 0))
               && (plVar4 != (long *)0x0)) {
              if ((*(byte *)(plVar4 + 1) & 1) != 0) {
                FUN_0049e790(puVar2,plVar4[3]);
              }
              FUN_0049e790(puVar2,plVar4);
            }
            if ((*pbVar3 & 1) != 0) {
              FUN_0049e790(puVar2,*(undefined8 *)(pbVar3 + 0x10));
            }
            FUN_0049e790(puVar2,pbVar3);
          }
        } while (local_88 != (long *)0x0);
        return;
      }
      local_78 = local_78 + 1;
    } while (*(ulong *)(lStack_80 + 8) != local_78);
  }
  return;
}


