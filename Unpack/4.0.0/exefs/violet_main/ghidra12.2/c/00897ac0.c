/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00897ac0; name: FUN_00897ac0
 */


void FUN_00897ac0(long param_1,undefined8 *param_2,long param_3)

{
  ushort uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  FUN_0089a6cc(param_1,param_3);
  *param_2 = *(undefined8 *)(param_1 + 8);
  param_2[1] = param_3 + 8;
  FUN_0089aaa4(param_2 + 0xf);
  param_2[0x14] = param_2;
  param_2[0x15] = param_2 + 0xf;
  plVar2 = (long *)(**(code **)PTR_DAT_047d2258)(0x10,4,*(undefined8 *)PTR_DAT_047d2268);
  if (plVar2 != (long *)0x0) {
    *plVar2 = (long)(PTR_DAT_047d2290 + 0x10);
    plVar2[1] = (long)param_2;
  }
  param_2[0x1a] = plVar2;
  if (*(short *)(param_3 + 0x40) != 0) {
    lVar5 = 0;
    uVar6 = 0;
    plVar2 = param_2 + 2;
    do {
      plVar3 = (long *)FUN_0089a948(param_1,*(long *)(param_3 + 0x28) + lVar5);
      lVar4 = *plVar3;
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x80;
      *plVar3 = *plVar2;
      *(long **)(lVar4 + 8) = plVar2;
      *(long **)(*plVar2 + 8) = plVar3;
      *plVar2 = lVar4;
    } while (uVar6 < *(ushort *)(param_3 + 0x40));
  }
  if (*(short *)(param_3 + 0x42) != 0) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      FUN_008be190(param_2 + 0x14,*(long *)(param_3 + 0x30) + lVar5);
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x48;
    } while (uVar6 < *(ushort *)(param_3 + 0x42));
  }
  uVar1 = *(ushort *)(param_3 + 0x44);
  param_2[0x18] = *(undefined8 *)(param_3 + 0x38);
  *(uint *)(param_2 + 0x19) = (uint)uVar1;
  return;
}


