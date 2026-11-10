/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031d3b30; name: FUN_031d3b30
 */


void FUN_031d3b30(long *param_1,char *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  size_t sVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = *param_1;
  sVar3 = strlen(param_2);
  iVar1 = (int)sVar3 + 1;
  if (*(code **)(lVar6 + 0x18) != (code *)0x0) {
    (**(code **)(lVar6 + 0x18))(param_2,sVar3,*(undefined8 *)(lVar6 + 0x28));
  }
  puVar2 = (undefined8 *)param_1[2];
  uVar5 = (long)(puVar2 + 3) + (long)iVar1 + 7 & 0xfffffffffffffff8;
  if ((uVar5 <= (ulong)param_1[3]) && (param_1[2] = uVar5, puVar2 != (undefined8 *)0x0)) {
    *puVar2 = param_3;
    *(short *)(puVar2 + 2) = (short)iVar1;
    uVar4 = nn::os::GetSystemTick();
    puVar2[1] = uVar4;
    memcpy(puVar2 + 3,param_2,(long)iVar1);
  }
  if (((*(byte *)(lVar6 + 0x38) & 1) != 0) && (param_1[6] != 0)) {
    puVar2 = (undefined8 *)param_1[2];
    uVar5 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar5 <= (ulong)param_1[3]) && (param_1[2] = uVar5, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = &DAT_03c4e575;
      puVar2[1] = *(undefined8 *)(param_1[6] + 8);
    }
  }
  return;
}


