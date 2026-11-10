/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01238ae0; name: FUN_01238ae0
 */


ulong FUN_01238ae0(long param_1,void *param_2,byte param_3,long *param_4,undefined2 *param_5)

{
  uint uVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined1 *puVar11;
  undefined1 local_5c [12];
  undefined1 auStack_38 [8];
  
  uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x290);
  uVar3 = (**(code **)(*param_4 + 0x98))(param_4);
  uVar3 = FUN_010e161c(uVar9,uVar3);
  uVar4 = FUN_01243680(param_1);
  uVar5 = FUN_01238c2c(param_1);
  uVar6 = FUN_01238ca8(*param_5);
  if ((uVar6 & 1) == 0) {
    uVar9 = 2;
  }
  else {
    uVar9 = 7;
  }
  FUN_011e244c(auStack_38,uVar9,uVar3);
  bVar2 = FUN_01238ce0(auStack_38,uVar4,uVar5,local_5c);
  if (param_3 != 0) {
    memset(param_2,0,(ulong)param_3 << 3);
  }
  if (bVar2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    uVar10 = (ulong)bVar2;
    puVar11 = local_5c;
    do {
      plVar7 = (long *)FUN_01238c38(param_1,*puVar11);
      if ((plVar7 != (long *)0x0) && (uVar8 = (**(code **)(*plVar7 + 0x200))(), (uVar8 & 1) == 0)) {
        uVar8 = uVar6 & 0xff;
        uVar1 = (int)uVar6 + 1;
        uVar6 = (ulong)uVar1;
        *(long **)((long)param_2 + uVar8 * 8) = plVar7;
        if (5 < (uVar1 & 0xff)) {
          return uVar6;
        }
      }
      uVar10 = uVar10 - 1;
      puVar11 = puVar11 + 1;
    } while (uVar10 != 0);
  }
  return uVar6;
}


