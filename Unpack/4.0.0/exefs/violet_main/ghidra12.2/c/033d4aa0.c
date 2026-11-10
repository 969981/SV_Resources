/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033d4aa0; name: FUN_033d4aa0
 */


void FUN_033d4aa0(float param_1,float param_2,undefined8 *param_3,long *param_4,long *param_5,
                 long param_6,ulong param_7,ulong param_8)

{
  ushort uVar1;
  ushort uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  
  uVar3 = (ulong)*(ushort *)((long)param_5 + 0x12);
  pvVar6 = (void *)*param_3;
  uVar1 = *(ushort *)(param_3 + 2);
  lVar4 = *param_4;
  uVar2 = *(ushort *)(param_4 + 2);
  switch(*(undefined4 *)(param_6 + 0x120)) {
  case 0:
  case 2:
    memcpy(pvVar6,(void *)(*param_5 + (param_7 & 0xff) * (ulong)*(ushort *)(param_5 + 2) * 4),
           uVar3 << 2);
    break;
  case 1:
  case 3:
    memset(pvVar6,0,uVar3 << 2);
  }
  if (*(uint *)(param_6 + 0x124) < 4) {
    pvVar6 = (void *)((long)pvVar6 + (ulong)uVar1 * 4);
    switch(*(uint *)(param_6 + 0x124)) {
    default:
      memcpy(pvVar6,(void *)(*param_5 + ((param_7 & 0xff) * 4 + 4) * (ulong)*(ushort *)(param_5 + 2)
                            ),uVar3 << 2);
      break;
    case 1:
    case 3:
      memset(pvVar6,0,uVar3 << 2);
    }
  }
  FUN_033d381c(param_6 + (param_8 & 0xff) * 0x58,param_3,param_4,param_6 + 0x148,param_6 + 0x108,
               param_6 + 0x128,*(undefined1 *)(param_6 + 0x19c));
  lVar5 = (param_7 & 0xff) * 4;
  FUN_033d5580(*(undefined4 *)(param_6 + 0x178),*(undefined4 *)(param_6 + 0x138),
               *(float *)(param_6 + 0x17c) * param_2,*(float *)(param_6 + 0x13c) * param_1,
               *param_5 + lVar5 * (ulong)*(ushort *)(param_5 + 2),lVar4,uVar3);
  FUN_033d5580(*(undefined4 *)(param_6 + 0x178),*(undefined4 *)(param_6 + 0x138),
               *(float *)(param_6 + 0x17c) * param_2,*(float *)(param_6 + 0x13c) * param_1,
               *param_5 + (lVar5 + 4) * (ulong)*(ushort *)(param_5 + 2),lVar4 + (ulong)uVar2 * 4,
               uVar3);
  return;
}


