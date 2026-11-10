/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dee204; name: FUN_01dee204
 */


void FUN_01dee204(long param_1)

{
  char *pcVar1;
  char *__format;
  byte bVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  byte *pbVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  undefined1 *local_c0;
  ulong *puStack_b8;
  undefined8 local_b0;
  long *local_a8;
  ulong local_a0 [8];
  
  lVar9 = *(long *)(param_1 + 0x50);
  if (lVar9 != 0) {
    local_a0[6] = 0;
    local_a0[7] = 0;
    uVar7 = 0;
    local_a0[4] = 0;
    local_a0[5] = 0;
    local_a0[2] = 0;
    local_a0[3] = 0;
    local_a0[0] = 0;
    local_a0[1] = 0;
    do {
      uVar3 = FUN_01400f2c(*(undefined8 *)(lVar9 + 0x70));
      uVar3 = (uVar3 & 3 << (ulong)(uVar7 << 1 & 0x1f) & 0xffff) >> (ulong)(uVar7 << 1 & 0x1f) &
              0xff;
      pcVar1 = "L_marker_set_00/L_%02d/blue";
      if (uVar3 != 1) {
        pcVar1 = "L_marker_set_00/L_%02d/default";
      }
      __format = "L_marker_set_00/L_%02d/red";
      if (uVar3 != 2) {
        __format = pcVar1;
      }
      snprintf((char *)local_a0,0x40,__format,(ulong)uVar7);
      plVar8 = *(long **)(param_1 + 0x38);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x58))(plVar8);
      }
      uVar5 = local_a0[0] & 0xff;
      local_c0 = &DAT_cbf29ce484222645;
      if ((char)local_a0[0] != '\0') {
        local_c0 = &DAT_cbf29ce484222645;
        pbVar6 = (byte *)((ulong)local_a0 | 1);
        do {
          local_c0 = (undefined1 *)(((ulong)local_c0 ^ uVar5) * 0x100000001b3);
          bVar2 = *pbVar6;
          uVar5 = (ulong)bVar2;
          pbVar6 = pbVar6 + 1;
        } while (bVar2 != 0);
      }
      local_b0 = 0x3f;
      local_a8 = (long *)0x0;
      puStack_b8 = local_a0;
      lVar4 = FUN_00e895f4(plVar8[0x2e],&local_c0);
      if (lVar4 != 0) {
        FUN_00dfcea4();
      }
      if (local_a8 != (long *)0x0) {
        (**(code **)(*local_a8 + 0x20))();
      }
      (**(code **)(*plVar8 + 0x60))(plVar8);
      uVar7 = uVar7 + 1;
    } while (uVar7 != 6);
  }
  return;
}


