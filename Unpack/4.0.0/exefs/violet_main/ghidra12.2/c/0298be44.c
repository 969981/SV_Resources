/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298be44; name: FUN_0298be44
 */


void FUN_0298be44(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  ushort uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 local_78 [5];
  int local_34;
  
  *param_2 = 0;
  plVar8 = (long *)*param_3;
  uVar3 = (**(code **)(*plVar8 + 0x98))(plVar8);
  uVar2 = *(ushort *)(param_3 + 1);
  if (uVar2 - 0x206 < 3) {
    uVar1 = *(undefined1 *)((long)param_3 + 10);
    uVar4 = (**(code **)(*plVar8 + 0x510))(plVar8,10);
    if (((uVar4 & 1) == 0) && (uVar4 = (**(code **)(*plVar8 + 0x5c8))(plVar8), (uVar4 & 1) == 0)) {
      local_34 = 0;
      FUN_0298bf94(param_1,local_78,&local_34,uVar3,(uint)uVar2,uVar1);
      if (local_34 != 0) {
        puVar5 = (undefined1 *)FUN_0298c100(param_1,local_78[0]);
        uVar1 = *puVar5;
        plVar6 = (long *)FUN_014813f4(param_1,uVar1);
        (**(code **)(*plVar8 + 0x508))(plVar8,10);
        (**(code **)(*plVar6 + 0x5b8))(plVar6,uVar3,uVar2);
        uVar7 = FUN_01249340(param_1);
        FUN_0291c698(uVar7,uVar1,0);
        uVar7 = FUN_01243584(param_1);
        FUN_02982f60(uVar7,uVar3,0x16b,uVar3,uVar1);
        *param_2 = 1;
      }
    }
  }
  return;
}


