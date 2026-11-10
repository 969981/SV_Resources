/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022cfd10; name: FUN_022cfd10
 */


undefined8 FUN_022cfd10(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  uVar3 = FUN_022cf120(param_1,1);
  iVar1 = FUN_00c92df0(param_1,2,0);
  dVar4 = (double)FUN_00c41790(param_1,3,0);
  dVar5 = (double)FUN_00c41790(param_1,4,0);
  FUN_00c41790(param_1,5,0);
  dVar6 = (double)FUN_00c41790(param_1,6,0);
  uVar7 = FUN_00c41790(param_1,7,0);
  if ((DAT_04844618 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04844618);
    if (iVar2 != 0) {
      DAT_048463c8 = 1;
      __cxa_guard_release(uVar7,&DAT_04844618);
    }
  }
  auVar8 = FUN_022cfe94((double)(float)dVar4,(float)dVar5,(float)dVar6,uVar3,(long)iVar1);
  FUN_00c46da0((double)auVar8._0_4_,param_1);
  FUN_00c46da0((double)auVar8._4_4_,param_1);
  FUN_00c46da0((double)auVar8._8_4_,param_1);
  FUN_00c46da0((double)auVar8._12_4_,param_1);
  return 4;
}


