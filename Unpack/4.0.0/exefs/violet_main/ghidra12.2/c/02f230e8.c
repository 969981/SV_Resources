/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f230e8; name: FUN_02f230e8
 */


/* WARNING: Removing unreachable block (ram,0x02f23418) */
/* WARNING: Removing unreachable block (ram,0x02f23424) */
/* WARNING: Removing unreachable block (ram,0x02f23428) */
/* WARNING: Removing unreachable block (ram,0x02f23430) */
/* WARNING: Removing unreachable block (ram,0x02f23438) */
/* WARNING: Removing unreachable block (ram,0x02f2343c) */
/* WARNING: Removing unreachable block (ram,0x02f23450) */
/* WARNING: Removing unreachable block (ram,0x02f23458) */
/* WARNING: Removing unreachable block (ram,0x02f2345c) */
/* WARNING: Removing unreachable block (ram,0x02f23464) */
/* WARNING: Removing unreachable block (ram,0x02f2346c) */
/* WARNING: Removing unreachable block (ram,0x02f23470) */
/* WARNING: Removing unreachable block (ram,0x02f2347c) */
/* WARNING: Removing unreachable block (ram,0x02f23484) */
/* WARNING: Removing unreachable block (ram,0x02f2348c) */
/* WARNING: Removing unreachable block (ram,0x02f23490) */
/* WARNING: Removing unreachable block (ram,0x02f23498) */
/* WARNING: Removing unreachable block (ram,0x02f234a0) */
/* WARNING: Removing unreachable block (ram,0x02f234a4) */
/* WARNING: Removing unreachable block (ram,0x02f234b0) */
/* WARNING: Removing unreachable block (ram,0x02f234b8) */
/* WARNING: Removing unreachable block (ram,0x02f234c0) */
/* WARNING: Removing unreachable block (ram,0x02f234c4) */
/* WARNING: Removing unreachable block (ram,0x02f234cc) */
/* WARNING: Removing unreachable block (ram,0x02f234d4) */
/* WARNING: Removing unreachable block (ram,0x02f234d8) */
/* WARNING: Removing unreachable block (ram,0x02f234e4) */
/* WARNING: Removing unreachable block (ram,0x02f234ec) */
/* WARNING: Removing unreachable block (ram,0x02f234f4) */
/* WARNING: Removing unreachable block (ram,0x02f234f8) */
/* WARNING: Removing unreachable block (ram,0x02f23500) */
/* WARNING: Removing unreachable block (ram,0x02f23508) */
/* WARNING: Removing unreachable block (ram,0x02f2350c) */
/* WARNING: Removing unreachable block (ram,0x02f23518) */
/* WARNING: Removing unreachable block (ram,0x02f23520) */
/* WARNING: Removing unreachable block (ram,0x02f23528) */
/* WARNING: Removing unreachable block (ram,0x02f2352c) */
/* WARNING: Removing unreachable block (ram,0x02f23534) */
/* WARNING: Removing unreachable block (ram,0x02f2353c) */
/* WARNING: Removing unreachable block (ram,0x02f23540) */

void FUN_02f230e8(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  undefined **local_100;
  undefined8 *puStack_f8;
  long local_f0;
  long local_e8;
  undefined8 *local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  undefined **local_b0;
  undefined8 *local_a8 [3];
  long local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  
  if (*(int *)(param_1 + 0x548) == 0) {
    uVar1 = (ulong)*(uint *)(param_1 + 0x528);
    if (0 < (int)*(uint *)(param_1 + 0x528)) {
      piVar2 = (int *)(*(long *)(param_1 + 0x520) + 0xc);
      do {
        if (*piVar2 != 0) goto LAB_02f23118;
        uVar1 = uVar1 - 1;
        piVar2 = piVar2 + 8;
      } while (uVar1 != 0);
    }
  }
  else {
LAB_02f23118:
    local_70 = (undefined8 *)0x0;
    local_68 = (undefined8 *)0x0;
    local_80 = (undefined8 *)0x0;
    local_78 = (undefined8 *)0x0;
    local_90 = 0;
    local_88 = (undefined8 *)0x0;
    local_b0 = &PTR_FUN_0460ecf0;
    local_a8[0] = &DAT_048832b0;
    local_a8[1] = &DAT_048832b0;
    local_a8[2] = &DAT_048832b0;
    if (*(long *)(param_3 + 0x20) != 0) {
      local_90 = *(long *)(param_3 + 0x20);
    }
    local_88 = &DAT_048832b0;
    local_80 = &DAT_048832b0;
    local_78 = &DAT_048832b0;
    local_70 = &DAT_048832b0;
    local_68 = &DAT_048832b0;
    local_68 = &DAT_048832b0;
    local_70 = &DAT_048832b0;
    local_78 = &DAT_048832b0;
    local_80 = &DAT_048832b0;
    local_88 = &DAT_048832b0;
    local_a8[2] = &DAT_048832b0;
    local_a8[1] = &DAT_048832b0;
    local_a8[0] = &DAT_048832b0;
    local_b0 = &PTR_FUN_0460ecf0;
    local_c0 = 0;
    local_b8 = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = 0;
    local_100 = &PTR_FUN_0460ed28;
    puStack_f8 = &DAT_048832b0;
    if (*(long *)(param_3 + 0x10) != 0) {
      local_f0 = *(long *)(param_3 + 0x10);
    }
    if (*(long *)(param_3 + 0x18) != 0) {
      local_e8 = *(long *)(param_3 + 0x18);
    }
    local_e0 = &DAT_048832b0;
    if (*(long *)(param_3 + 0x28) != 0) {
      local_d8 = *(long *)(param_3 + 0x28);
    }
    if (*(long *)(param_3 + 0x30) != 0) {
      local_d0 = *(long *)(param_3 + 0x30);
    }
    if (*(long *)(param_3 + 0x38) != 0) {
      local_c8 = *(long *)(param_3 + 0x38);
    }
    if (*(long *)(param_3 + 0x40) != 0) {
      local_c0 = *(long *)(param_3 + 0x40);
    }
    if (*(long *)(param_3 + 0x48) != 0) {
      local_b8 = *(long *)(param_3 + 0x48);
    }
    puVar4 = (uint *)**(undefined8 **)(param_1 + 0x550);
    if ((*puVar4 & 0xffff) != 0) {
      puVar3 = puVar4 + 8;
      uVar6 = *puVar4 & 0xffff;
      uVar5 = 0x7fffffff;
      do {
        (**(code **)(*local_a8[*(byte *)((long)puVar3 + 3)] + 0x20))
                  (local_a8[*(byte *)((long)puVar3 + 3)],puVar3);
        if ((int)uVar6 < 2) {
          if ((uVar5 == 0) || (puVar4 = *(uint **)(puVar4 + 2), puVar4 == (uint *)0x0)) break;
          uVar6 = *puVar4 & 0xffff;
          if ((int)uVar5 <= (int)(*puVar4 & 0xffff)) {
            uVar6 = uVar5;
          }
          if ((int)uVar6 < 1) break;
          uVar5 = uVar5 - uVar6;
          puVar3 = puVar4 + 8;
          Hint_Prefetch(*(long *)(puVar4 + 2),0,0,0);
          Hint_Prefetch(*(long *)(puVar4 + 2) + 0x40,0,0,0);
          Hint_Prefetch(puVar4 + 0x20,0,0,0);
          Hint_Prefetch(puVar4 + 0x30,0,0,0);
        }
        else {
          uVar6 = uVar6 - 1;
          puVar3 = (uint *)((long)puVar3 + (ulong)(ushort)*puVar3);
        }
      } while (puVar3 != (uint *)0x0);
    }
    FUN_02f24d2c(param_1 + 0x520,&local_b0,0);
    puVar4 = (uint *)**(undefined8 **)(param_1 + 0x550);
    if ((*puVar4 & 0xffff) != 0) {
      puVar3 = puVar4 + 8;
      uVar5 = 0x7fffffff;
      uVar6 = *puVar4 & 0xffff;
      do {
        while( true ) {
          (**(code **)(*(&puStack_f8)[*(byte *)((long)puVar3 + 3)] + 0x20))
                    ((&puStack_f8)[*(byte *)((long)puVar3 + 3)],puVar3);
          if (uVar6 - 1 != 0 && 0 < (int)uVar6) break;
          if ((uVar5 == 0) || (puVar4 = *(uint **)(puVar4 + 2), puVar4 == (uint *)0x0))
          goto LAB_02f2337c;
          uVar6 = *puVar4 & 0xffff;
          if ((int)uVar5 <= (int)(*puVar4 & 0xffff)) {
            uVar6 = uVar5;
          }
          if ((int)uVar6 < 1) goto LAB_02f2337c;
          uVar5 = uVar5 - uVar6;
          puVar3 = puVar4 + 8;
          Hint_Prefetch(*(long *)(puVar4 + 2),0,0,0);
          Hint_Prefetch(*(long *)(puVar4 + 2) + 0x40,0,0,0);
          Hint_Prefetch(puVar4 + 0x20,0,0,0);
          Hint_Prefetch(puVar4 + 0x30,0,0,0);
          if (puVar3 == (uint *)0x0) goto LAB_02f2337c;
        }
        puVar3 = (uint *)((long)puVar3 + (ulong)(ushort)*puVar3);
        uVar6 = uVar6 - 1;
      } while (puVar3 != (uint *)0x0);
    }
LAB_02f2337c:
    FUN_02f24d2c(param_1 + 0x520,&local_100,0);
    local_100 = &PTR_FUN_0460ed28;
    memset(&puStack_f8,0,0x48);
    FUN_031c4168(&local_100);
    local_b0 = &PTR_FUN_0460ecf0;
    memset(local_a8,0,0x48);
    FUN_031c4168(&local_b0);
  }
  return;
}


