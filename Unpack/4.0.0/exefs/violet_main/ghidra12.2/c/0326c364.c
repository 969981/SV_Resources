/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0326c364; name: FUN_0326c364
 */


void FUN_0326c364(long param_1,double *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  double local_100;
  double dStack_f8;
  double local_f0;
  double dStack_e8;
  double local_c8;
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [32];
  
  FUN_03271194(param_1 + 0x20,param_1 + 0x60,param_1 + 0xa0,&local_100);
  local_100 = local_100 / dStack_e8;
  uVar5 = (ulong)local_100 & 0x7ff0000000000000;
  if (uVar5 < 0x340000000000001) {
    uVar5 = 0x340000000000000;
  }
  local_c8 = local_c8 / dStack_e8;
  local_f0 = local_f0 / dStack_e8;
  uVar7 = (ulong)local_f0 & 0x7ff0000000000000;
  dStack_f8 = dStack_f8 / dStack_e8;
  uVar6 = (ulong)dStack_f8 & 0x7ff0000000000000;
  if (uVar6 < 0x340000000000001) {
    uVar6 = 0x340000000000000;
  }
  if (uVar7 < 0x340000000000001) {
    uVar7 = 0x340000000000000;
  }
  bVar1 = 1.0 <= ABS(local_f0 * local_c8) +
                 ABS((double)(uVar7 + 0xfcc0000000000000) / dStack_e8) +
                 (double)(uVar7 + 0xfcc0000000000000);
  if (((1.0 <= ABS(local_100 * local_c8) +
               ABS((double)(uVar5 + 0xfcc0000000000000) / dStack_e8) +
               (double)(uVar5 + 0xfcc0000000000000) &&
       1.0 <= ABS(dStack_f8 * local_c8) +
              ABS((double)(uVar6 + 0xfcc0000000000000) / dStack_e8) +
              (double)(uVar6 + 0xfcc0000000000000)) && bVar1) && bVar1) {
    FUN_032717a8(param_1,auStack_50,auStack_70,auStack_90,auStack_b0);
    iVar2 = FUN_03271010(auStack_50,auStack_b0);
    iVar3 = FUN_03271010(auStack_70,auStack_b0);
    iVar4 = FUN_03271010(auStack_90,auStack_b0);
    local_100 = (double)iVar2;
    dStack_f8 = (double)iVar3;
    local_f0 = (double)iVar4;
  }
  *param_2 = local_100;
  param_2[1] = dStack_f8;
  param_2[2] = local_f0;
  param_2[3] = local_f0;
  return;
}


