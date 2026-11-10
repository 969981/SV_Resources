/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019138f0; name: FUN_019138f0
 */


void FUN_019138f0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  FUN_019139f8();
  FUN_019139a4();
  FUN_01913a70();
  lVar4 = DAT_0485ea90;
  plVar3 = DAT_0485ea38;
  uVar2 = DAT_045dfcac;
  uVar1 = DAT_045dfca8;
  if (DAT_0485ea90 == 0) {
    return;
  }
  uVar5 = (**(code **)(*DAT_0485ea38 + 0xf8))(DAT_0485ea38);
  if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar4,uVar1,uVar2);
  }
  else {
    FUN_00c48fe8(plVar3,lVar4,uVar1,uVar2);
  }
  DAT_0485ea90 = 0;
  return;
}


