/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001bb0d0; name: FUN_001bb0d0
 */


void FUN_001bb0d0(int *param_1,long param_2,ulong param_3,long param_4,int param_5,int param_6)

{
  byte *pbVar1;
  long lVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_4 != 0) {
    *param_1 = *param_1 + (int)param_4;
    bVar3 = *(byte *)(param_2 + param_3);
    uVar4 = (ulong)bVar3;
    uVar5 = (ulong)((uint)bVar3 - (uint)*(byte *)(param_2 + (param_3 - (long)param_5))) & 0xff;
    param_1[uVar4 + 1] = param_1[uVar4 + 1] + param_6;
    param_1[uVar5 + 0x101] = param_1[uVar5 + 0x101] + param_6;
    param_1[(param_3 & 3) * 0x100 + uVar5 + 0x1301] =
         param_1[(param_3 & 3) * 0x100 + uVar5 + 0x1301] + param_6;
    param_1[(param_3 & 0xf) * 0x100 + uVar5 + 0x1701] =
         param_1[(param_3 & 0xf) * 0x100 + uVar5 + 0x1701] + param_6;
    uVar5 = (ulong)((byte *)(param_2 + param_3))[-1] & 0xf0;
    param_1[uVar5 * 0x10 + uVar4 + 0x301] = param_1[uVar5 * 0x10 + uVar4 + 0x301] + param_6;
    if (1 < param_4) {
      param_4 = param_4 + -1;
      do {
        pbVar1 = (byte *)(param_2 + param_3);
        bVar3 = pbVar1[1];
        uVar4 = (ulong)bVar3;
        lVar2 = (param_2 - param_5) + param_3;
        param_3 = param_3 + 1;
        param_1[uVar4 + 1] = param_1[uVar4 + 1] + param_6;
        uVar5 = (ulong)((uint)bVar3 - (uint)*(byte *)(lVar2 + 1)) & 0xff;
        param_1[uVar5 + 0x201] = param_1[uVar5 + 0x201] + param_6;
        param_4 = param_4 + -1;
        param_1[(param_3 & 3) * 0x100 + uVar5 + 0x1301] =
             param_1[(param_3 & 3) * 0x100 + uVar5 + 0x1301] + param_6;
        param_1[(param_3 & 0xf) * 0x100 + uVar5 + 0x1701] =
             param_1[(param_3 & 0xf) * 0x100 + uVar5 + 0x1701] + param_6;
        uVar5 = (ulong)*pbVar1 & 0xf0;
        param_1[uVar5 * 0x10 + uVar4 + 0x301] = param_1[uVar5 * 0x10 + uVar4 + 0x301] + param_6;
      } while (param_4 != 0);
    }
  }
  return;
}


