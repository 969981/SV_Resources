/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031d39e0; name: FUN_031d39e0
 */


void FUN_031d39e0(long *param_1,long param_2,int param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *param_1;
  if (*(code **)(lVar5 + 0x18) != (code *)0x0) {
    (**(code **)(lVar5 + 0x18))(param_2 + 2,param_3 + -2,*(undefined8 *)(lVar5 + 0x28));
  }
  plVar1 = (long *)param_1[2];
  uVar4 = (long)plVar1 + 0x17U & 0xfffffffffffffff8;
  if ((uVar4 <= (ulong)param_1[3]) && (param_1[2] = uVar4, plVar1 != (long *)0x0)) {
    *plVar1 = param_2;
    lVar3 = nn::os::GetSystemTick();
    plVar1[1] = lVar3;
  }
  if (((*(byte *)(lVar5 + 0x38) & 1) != 0) && (param_1[6] != 0)) {
    puVar2 = (undefined8 *)param_1[2];
    uVar4 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar4 <= (ulong)param_1[3]) && (param_1[2] = uVar4, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = &DAT_03c4e575;
      puVar2[1] = *(undefined8 *)(param_1[6] + 8);
    }
  }
  return;
}


