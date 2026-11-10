/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008a92d0; name: FUN_008a92d0
 */


void FUN_008a92d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  byte bVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined4 local_44;
  
  *param_1 = param_4;
  bVar3 = *(byte *)(param_1 + 0x45) & 0xfb | *(char *)(param_5 + 0xdb) << 2;
  *(byte *)(param_1 + 0x45) = bVar3;
  bVar1 = *(char *)(param_5 + 0xdd) << 3;
  *(byte *)(param_1 + 0x45) = bVar3 & 0xf7 | bVar1;
  *(byte *)(param_1 + 0x45) = bVar3 & 0xf5 | bVar1 | *(char *)(param_5 + 0xdc) << 1;
  memset(param_1 + 1,0,0x210);
  lVar6 = FUN_008a6694(param_4,3);
  lVar7 = FUN_008a6694(*param_1,4);
  if (lVar6 == 0) {
    if (lVar7 != 0) goto LAB_008a93d8;
    iVar4 = *(int *)(param_1 + 0x44);
  }
  else {
    param_1[1] = lVar6;
    FUN_008a946c(param_1,param_2,param_3,lVar6,param_5);
    if (lVar7 != 0) {
LAB_008a93d8:
      param_1[0xb] = lVar7;
      FUN_008a96c0(param_1,param_3,lVar7,param_5);
      lVar2 = **(long **)(param_5 + 0x30) + 0xc;
      FUN_008b4fd0((*(long **)(param_5 + 0x30))[4],
                   lVar2 + (ulong)*(uint *)(lVar2 + (ulong)*(ushort *)(lVar7 + 4) * 4));
      FUN_008b5040();
      FUN_008a9840(param_1,param_3,*(undefined8 *)(param_5 + 0x20),lVar6,lVar7);
      goto LAB_008a944c;
    }
    local_44 = 1;
    lVar6 = FUN_00899bd0(*(undefined8 *)(param_5 + 0x20),param_3,0x4b53414d,1,&local_44);
    param_1[0x43] = lVar6;
    iVar4 = FUN_008b4430(*(undefined8 *)(lVar6 + 0x38),0x4b53414d,1,&local_44);
    *(int *)(param_1 + 0x44) = iVar4;
  }
  lVar6 = *(long *)(param_1[0x43] + 0x30);
  iVar5 = FUN_008947b8();
  *(undefined4 *)((long)param_1 + 0x224) = *(undefined4 *)(lVar6 + (long)(iVar5 * iVar4) * 4);
LAB_008a944c:
  param_1[1] = 0;
  param_1[0xb] = 0;
  return;
}


