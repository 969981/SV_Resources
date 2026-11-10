/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f6c5c0; name: FUN_02f6c5c0
 */


void FUN_02f6c5c0(long param_1,long param_2,ulong param_3,long *param_4,undefined8 param_5,
                 undefined8 param_6,uint param_7)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  code *pcVar5;
  long lVar6;
  uint uVar7;
  uint *puVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long local_b0;
  long local_a8;
  long local_a0;
  uint local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  uint local_70;
  long local_68;
  
  if ((param_7 >> 4 & 1) == 0) {
    if ((param_7 >> 7 & 1) == 0) goto LAB_02f6c66c;
    local_88 = CONCAT62(local_88._2_6_,0x80);
    lVar14 = *(long *)(param_1 + 0x500) + (param_3 & 0xffffff) * 0x20;
    plVar2 = *(long **)(*(long *)(param_1 + 0x40) + 0x1398);
    lVar3 = *param_4;
    lVar13 = lVar3 + (long)(int)param_4[1] * 0x10;
    pcVar5 = *(code **)(*plVar2 + 0x18);
  }
  else {
    plVar2 = *(long **)(*(long *)(param_1 + 0x40) + 0x13b0);
    lVar3 = *param_4;
    lVar13 = lVar3 + (long)(int)param_4[1] * 0x10;
    pcVar5 = *(code **)(*plVar2 + 0x18);
    lVar14 = 0;
  }
  (*pcVar5)(plVar2,param_1,param_2,&local_88,lVar3,lVar13,lVar14);
LAB_02f6c66c:
  plVar2 = (long *)*param_4;
  local_88 = *(long *)(*(long *)(param_1 + 8) + 0x38) +
             ((ulong)*(uint *)(*plVar2 + 4) & 0xffffff) * 0xc0;
  local_80 = *(long *)(*(long *)(param_1 + 8) + 0x150) + (ulong)*(uint *)(local_88 + 0x80) * 0x80;
  if ((int)param_4[1] < 1) {
    return;
  }
  lVar13 = 0;
  lVar14 = 1;
  uVar4 = 0xffffffff;
  do {
    puVar8 = *(uint **)((long)plVar2 + lVar13);
    if (*(char *)((long)puVar8 + 0xe) == '\0') {
      lVar3 = *(long *)((long)plVar2 + lVar13 + 8);
      if (lVar14 == 1) {
        uVar7 = *(uint *)(lVar3 + 0xa0);
LAB_02f6c8f0:
        local_78 = *(long *)(lVar3 + 0xa8);
        local_68 = *(long *)(local_88 + 0x78);
        if (*(char *)(local_68 + 0x18) == '\x15') {
          plVar10 = (long *)(local_68 + (ulong)(uVar7 >> 0x1d) * 8 + 0x48);
          lVar6 = *plVar10;
          local_68 = 0;
          if (lVar6 != 0) {
            local_68 = lVar6 + (long)plVar10;
          }
        }
        puVar8 = *(uint **)((long)plVar2 + lVar13);
        local_70 = uVar7;
      }
      else {
        uVar7 = *(uint *)(lVar3 + 0xa0);
        if (uVar7 != local_70) goto LAB_02f6c8f0;
      }
      local_b0 = *(long *)(*(long *)(param_1 + 8) + 0x38) + ((ulong)*puVar8 & 0xffffff) * 0xc0;
      local_a8 = *(long *)(*(long *)(param_1 + 8) + 0x150) +
                 (ulong)*(uint *)(local_b0 + 0x80) * 0x80;
      local_a0 = *(undefined8 *)(lVar3 + 0xb0);
      local_98 = *(uint *)(lVar3 + 0xa4);
      local_90 = *(long *)(local_b0 + 0x78);
      if (*(char *)(local_90 + 0x18) == '\x15') {
        plVar2 = (long *)(local_90 + ((ulong)(local_98 >> 0x1a) & 0x38) + 0x48);
        lVar6 = *plVar2;
        local_90 = 0;
        if (lVar6 != 0) {
          local_90 = lVar6 + (long)plVar2;
        }
      }
      FUN_02f6c2b0(param_1,param_2,lVar3,&local_88,&local_b0,lVar14 == 1 || local_70 != uVar4,
                   param_5,param_6);
    }
    else {
      puVar11 = (undefined8 *)((undefined8 *)((long)plVar2 + lVar13))[1];
      local_78 = *(long *)(param_1 + 0x20) + (ulong)*(ushort *)(puVar11 + 1) * 0x50;
      puVar8 = (uint *)*puVar11;
      lVar6 = *(long *)(param_1 + 8);
      uVar9 = (ulong)**(uint **)((long)plVar2 + lVar13) & 0xffffff;
      local_b0 = *(long *)(lVar6 + 0x38) + uVar9 * 0xc0;
      local_a8 = *(long *)(lVar6 + 0x150) + (ulong)*(uint *)(local_b0 + 0x80) * 0x80;
      local_a0 = *(long *)(param_1 + 0x20) + (ulong)*(ushort *)((long)puVar11 + 10) * 0x50;
      lVar3 = *(long *)(local_88 + 0x78);
      if (*(char *)(lVar3 + 0x19) == '\x02') {
        local_70 = 0xffffffff;
        if (*(char *)(lVar3 + 0x18) == '\x15') {
          plVar2 = (long *)(lVar3 + 0x80);
          lVar12 = *plVar2;
          lVar3 = 0;
          if (lVar12 != 0) {
            lVar3 = lVar12 + (long)plVar2;
          }
        }
LAB_02f6c7ec:
        local_68 = lVar3;
      }
      else {
        uVar7 = puVar8[1];
        if (*(char *)(lVar3 + 0x18) != '\x15') {
LAB_02f6c7c0:
          local_70 = uVar7;
          if (*(char *)(lVar3 + 0x18) == '\x15') {
            plVar2 = (long *)(lVar3 + ((ulong)(uVar7 >> 0x1a) & 0x38) + 0x48);
            lVar12 = *plVar2;
            lVar3 = 0;
            if (lVar12 != 0) {
              lVar3 = lVar12 + (long)plVar2;
            }
          }
          goto LAB_02f6c7ec;
        }
        bVar1 = *(byte *)((long)puVar8 + 0xe) >> 5;
        plVar2 = (long *)(lVar3 + (ulong)bVar1 * 8 + 0x48);
        lVar12 = *plVar2;
        local_68 = 0;
        if (lVar12 != 0) {
          local_68 = lVar12 + (long)plVar2;
        }
        local_70 = (uint)bVar1 << 0x1d | 0x1fffffff;
        if (*(char *)(local_68 + 0x19) != '\x02') goto LAB_02f6c7c0;
      }
      lVar3 = *(long *)(*(long *)(lVar6 + 0x38) + uVar9 * 0xc0 + 0x78);
      if (*(char *)(lVar3 + 0x19) == '\x02') {
        local_98 = 0xffffffff;
        if (*(char *)(lVar3 + 0x18) == '\x15') {
          plVar2 = (long *)(lVar3 + 0x80);
          lVar12 = *plVar2;
LAB_02f6c888:
          lVar3 = 0;
          if (lVar12 != 0) {
            lVar3 = lVar12 + (long)plVar2;
          }
        }
LAB_02f6c894:
        local_90 = lVar3;
      }
      else {
        uVar7 = *puVar8;
        if (*(char *)(lVar3 + 0x18) != '\x15') {
LAB_02f6c868:
          local_98 = uVar7;
          if (*(char *)(lVar3 + 0x18) == '\x15') {
            plVar2 = (long *)(lVar3 + ((ulong)(uVar7 >> 0x1a) & 0x38) + 0x48);
            lVar12 = *plVar2;
            goto LAB_02f6c888;
          }
          goto LAB_02f6c894;
        }
        bVar1 = *(byte *)((long)puVar8 + 0xe) >> 5;
        plVar2 = (long *)(lVar3 + (ulong)bVar1 * 8 + 0x48);
        lVar12 = *plVar2;
        local_98 = (uint)bVar1 << 0x1d | 0x1fffffff;
        local_90 = 0;
        if (lVar12 != 0) {
          local_90 = lVar12 + (long)plVar2;
        }
        if (*(char *)(local_90 + 0x19) != '\x02') goto LAB_02f6c868;
      }
      (**(code **)(**(long **)(lVar6 + 0x658) + 0x68))
                (*(long **)(lVar6 + 0x658),param_1,*(undefined8 *)(param_2 + 8),puVar8,&local_88,
                 &local_b0,lVar14 == 1 || local_70 != uVar4,param_5,param_6);
    }
    if ((int)param_4[1] <= lVar14) {
      return;
    }
    lVar14 = lVar14 + 1;
    lVar13 = lVar13 + 0x10;
    plVar2 = (long *)*param_4;
    uVar4 = local_70;
  } while( true );
}


