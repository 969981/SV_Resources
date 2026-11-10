/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a02da0; name: FUN_02a02da0
 */


undefined8 FUN_02a02da0(string *param_1,byte *param_2)

{
  string *psVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar7 = (ulong)((byte)*param_1 >> 1);
  psVar1 = *(string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    psVar1 = param_1 + 1;
  }
  else {
    uVar7 = *(ulong *)(param_1 + 8);
  }
  uVar2 = uVar7;
  do {
    uVar6 = uVar2;
    if (uVar6 == 0) goto LAB_02a02e04;
    uVar2 = uVar6 - 1;
  } while (psVar1[uVar6 - 1] != (string)0x2f);
  if ((uVar6 == 0) || (uVar6 == uVar7)) {
LAB_02a02e04:
    uVar4 = 0;
  }
  else {
    std::string::string((string *)&local_48,param_1,uVar6,0xffffffffffffffff,(allocator *)param_1);
    if (((*param_2 & 1) != 0) && (lVar8 = *(long *)(param_2 + 0x10), lVar8 != 0)) {
      lVar5 = tpidr_el0;
      plVar9 = *(long **)(lVar5 + 0x30);
      if (plVar9 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar9 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
      }
      uVar7 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar7 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,lVar8,0,8);
      }
      else {
        FUN_00c48fe8(plVar9,lVar8,0,8);
      }
    }
    uVar4 = 1;
    *(undefined8 *)(param_2 + 8) = uStack_40;
    *(undefined8 *)(param_2 + 0x10) = local_38;
    *(undefined8 *)param_2 = local_48;
  }
  return uVar4;
}


