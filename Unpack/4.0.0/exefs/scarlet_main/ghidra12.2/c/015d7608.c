/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015d7608; name: FUN_015d7608
 */


void FUN_015d7608(undefined8 *param_1,ulong *param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *local_58 [5];
  ulong *local_28;
  
  if (((DAT_0483b190 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0483b190), iVar3 != 0)) {
    FUN_00100190(&LAB_02a3f0a4,&DAT_0483b180,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483b190);
  }
  lVar2 = DAT_0483b180;
  DAT_0483b198 = DAT_0483b180;
  puVar7 = *(undefined8 **)(DAT_0483b180 + 0x658);
  if (puVar7 != (undefined8 *)0x0) {
    uVar4 = *param_2;
    plVar1 = (long *)(DAT_0483b180 + 0x650);
    puVar5 = puVar7;
    do {
      if ((ulong)puVar5[4] <= uVar4) {
        if (uVar4 <= (ulong)puVar5[4]) {
          puVar5 = (undefined8 *)(DAT_0483b180 + 0x658);
          goto LAB_015d7704;
        }
        puVar5 = puVar5 + 1;
      }
      puVar5 = (undefined8 *)*puVar5;
    } while (puVar5 != (undefined8 *)0x0);
  }
  FUN_00ef8710(param_1,0);
  return;
LAB_015d7704:
  if (uVar4 < (ulong)puVar7[4]) {
    puVar6 = (undefined8 *)*puVar7;
    puVar5 = puVar7;
    if (puVar6 == (undefined8 *)0x0) goto LAB_015d7734;
  }
  else {
    if (uVar4 <= (ulong)puVar7[4]) {
LAB_015d7734:
      puVar6 = (undefined8 *)*puVar5;
      local_28 = param_2;
      if ((undefined8 *)*puVar5 == (undefined8 *)0x0) {
        FUN_015d77b4(local_58,plVar1,&local_28);
        *local_58[0] = 0;
        local_58[0][1] = 0;
        local_58[0][2] = puVar7;
        *puVar5 = local_58[0];
        puVar7 = local_58[0];
        if (*(long *)*plVar1 != 0) {
          *plVar1 = *(long *)*plVar1;
          puVar7 = (undefined8 *)*puVar5;
        }
        FUN_010108e0(*(undefined8 *)(lVar2 + 0x658),puVar7);
        *(long *)(lVar2 + 0x680) = *(long *)(lVar2 + 0x680) + 1;
        puVar6 = local_58[0];
      }
      *param_1 = 0;
      param_1[1] = 0;
      FUN_00ca1a48(param_1,puVar6 + 8);
      return;
    }
    puVar5 = puVar7 + 1;
    puVar6 = (undefined8 *)*puVar5;
    if (puVar6 == (undefined8 *)0x0) goto LAB_015d7734;
  }
  puVar7 = puVar6;
  goto LAB_015d7704;
}


