/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002dc738; name: FUN_002dc738
 */


undefined8 FUN_002dc738(long param_1,byte param_2,ulong param_3)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  byte bVar5;
  byte bVar6;
  undefined8 uVar7;
  void *pvVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  long local_108;
  undefined1 auStack_100 [60];
  int local_c4;
  byte *local_c0;
  char local_b8;
  undefined4 local_b4;
  byte local_b0;
  void *local_a8;
  uint local_a0;
  uint local_98;
  int local_94;
  ulong local_90;
  undefined4 local_58;
  
  FUN_002d9cd0(auStack_100);
  if ((*(byte *)(param_1 + 2) >> 5 & 1) != 0) {
    local_b4 = 2;
  }
  if ((long)param_3 < 1) {
    local_94 = 100000;
  }
  else if (param_3 < 0x1a9) {
    local_94 = 0;
  }
  else {
    local_94 = 0x1000000;
    if (param_3 - 0x1a8 >> 0x1b == 0) {
      local_94 = (int)(param_3 - 0x1a8 >> 3);
    }
  }
  local_58 = 0;
  local_b0 = param_2 & 1;
  local_90 = param_3;
                    /* try { // try from 002dc7c4 to 002dc7cb has its CatchHandler @ 002dcaa4 */
  local_108 = FUN_002e7450(param_1);
  if (local_108 != 0) {
                    /* try { // try from 002dc7d4 to 002dc7df has its CatchHandler @ 002dcaa0 */
    bVar5 = FUN_002dcac0(&local_108,0);
                    /* try { // try from 002dc7e4 to 002dc7ef has its CatchHandler @ 002dca9c */
    bVar6 = FUN_002dcc90(&local_108,0);
    lVar3 = local_108;
    local_c4 = local_94 << 1;
                    /* try { // try from 002dc804 to 002dc823 has its CatchHandler @ 002dcaa8 */
    uVar7 = FUN_002dd7dc(auStack_100,local_108,0,0);
    FUN_002e4804(lVar3);
    if (local_b8 == '\0') {
      local_b0 = 0;
      if ((int)local_98 < local_94) {
        uVar12 = local_98;
        if ((int)local_a0 <= (int)local_98) {
          uVar12 = 8;
          if (local_a0 != 0) {
            uVar12 = local_a0;
          }
          do {
            uVar2 = uVar12;
            uVar12 = uVar2 << 1;
          } while ((int)uVar2 <= (int)local_98);
          pvVar8 = (void *)FUN_0049e770(PTR_FUN_047cba38,
                                        -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 |
                                        (ulong)uVar2 << 3);
          if (local_a8 != (void *)0x0) {
            memmove(pvVar8,local_a8,(long)(int)local_98 << 3);
          }
          memset((void *)((long)pvVar8 + (long)(int)local_98 * 8),0,
                 -(ulong)(uVar2 - local_98 >> 0x1f) & 0xfffffff800000000 |
                 (ulong)(uVar2 - local_98) << 3);
          bVar4 = local_a8 != (void *)0x0;
          local_a8 = pvVar8;
          if (bVar4) {
            FUN_0049e790(PTR_LAB_047cba48);
          }
          uVar12 = local_98;
          local_a0 = uVar2;
        }
        local_98 = uVar12 + 1;
        if ((int)uVar12 < 0) {
          uVar12 = 0;
        }
        else {
                    /* try { // try from 002dc8e4 to 002dc8eb has its CatchHandler @ 002dca94 */
          FUN_002d0374((void *)((long)local_a8 + (ulong)uVar12 * 8),0);
        }
      }
      else {
        uVar12 = 0;
        local_b8 = '\x01';
      }
      uVar7 = FUN_002d9f68(auStack_100,uVar7,uVar12);
      bVar4 = (param_2 & 1) == 0;
      bVar1 = bVar6;
      if (bVar4) {
        bVar1 = bVar5;
      }
      *local_c0 = bVar1 & 1;
      if (bVar4) {
        bVar5 = bVar6;
      }
      local_c0[2] = param_2 & 1;
      *(int *)(local_c0 + 8) = (int)uVar7;
      local_c0[1] = bVar5 & 1;
      if ((bVar1 & 1) == 0) {
        if ((local_b8 == '\0') && ((int)local_98 < local_94)) {
          if ((int)local_a0 <= (int)local_98) {
            uVar12 = 8;
            if (local_a0 != 0) {
              uVar12 = local_a0;
            }
            do {
              uVar2 = uVar12;
              uVar12 = uVar2 << 1;
            } while ((int)uVar2 <= (int)local_98);
            pvVar8 = (void *)FUN_0049e770(PTR_FUN_047cba38,
                                          -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 |
                                          (ulong)uVar2 << 3);
            if (local_a8 != (void *)0x0) {
              memmove(pvVar8,local_a8,(long)(int)local_98 << 3);
            }
            memset((void *)((long)pvVar8 + (long)(int)local_98 * 8),0,
                   -(ulong)(uVar2 - local_98 >> 0x1f) & 0xfffffff800000000 |
                   (ulong)(uVar2 - local_98) << 3);
            bVar4 = local_a8 != (void *)0x0;
            local_a8 = pvVar8;
            if (bVar4) {
              FUN_0049e790(PTR_LAB_047cba48);
            }
            local_a0 = uVar2;
          }
          uVar11 = (ulong)local_98;
          uVar12 = local_98 + 1;
          bVar4 = (int)local_98 < 0;
          local_98 = uVar12;
          if (bVar4) goto LAB_002dca20;
                    /* try { // try from 002dc9f8 to 002dca3b has its CatchHandler @ 002dca98 */
          FUN_002d031c((void *)((long)local_a8 + uVar11 * 8),0,0xff,0,0);
          uVar10 = uVar11 << 0x21;
        }
        else {
          local_b8 = '\x01';
LAB_002dca20:
          uVar10 = 0;
          uVar11 = 0;
        }
        uVar9 = FUN_002da268(auStack_100,uVar10 | uVar11,1);
        uVar7 = FUN_002d9f68(auStack_100,uVar9,uVar7);
      }
      *(int *)(local_c0 + 0xc) = (int)uVar7;
                    /* try { // try from 002dca54 to 002dca5f has its CatchHandler @ 002dcaa8 */
      uVar7 = FUN_002dce60(auStack_100,param_1);
      goto LAB_002dca64;
    }
  }
  uVar7 = 0;
LAB_002dca64:
  FUN_002d9eb0(auStack_100);
  return uVar7;
}


