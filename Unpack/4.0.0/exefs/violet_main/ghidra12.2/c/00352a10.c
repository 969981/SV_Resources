/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00352a10; name: FUN_00352a10
 */


void FUN_00352a10(undefined8 param_1,undefined4 param_2,int param_3,undefined8 param_4)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [32];
  
  strerror(param_3);
  FUN_003673f0(auStack_50);
  FUN_00351340(param_1,param_2,auStack_50,0,0);
  lVar4 = FUN_00351820();
  uVar6 = (uint)*(byte *)(lVar4 + 0x10);
  if (*(byte *)(lVar4 + 0x10) == 0xff) {
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    bVar2 = *(byte *)(lVar4 + 0x2f);
    uVar6 = (uint)bVar2;
    bVar3 = *(byte *)(lVar4 + 0x30);
    if ((uint)bVar2 < (uint)bVar3) {
      *(byte *)(lVar4 + 0x2f) = bVar2 + 1;
    }
    else {
      uVar6 = (uint)bVar3 + (uint)bVar3 * 2;
      uVar1 = 0xfffffffe;
      if (uVar6 < 0x1fe) {
        uVar1 = uVar6 >> 1;
      }
      *(char *)(lVar4 + 0x30) = (char)uVar1;
      if ((uVar1 & 0xff) <= (uint)bVar2) goto LAB_00352a98;
      lVar4 = FUN_0038c7f0(lVar4,(uVar1 & 0xff) * 8 + 0x38);
      uVar6 = (uint)*(byte *)(lVar4 + 0x2f);
      *(char *)(lVar4 + 0x2f) = (char)(uVar6 + 1);
      if (uVar6 + 1 >> 8 != 0) goto LAB_00352a98;
    }
  }
  *(char *)(lVar4 + 0x10) = (char)uVar6;
  *(long *)(lVar4 + (ulong)uVar6 * 8 + 0x38) = (long)param_3;
LAB_00352a98:
  strerror(param_3);
  FUN_003673f0(auStack_70);
  uVar5 = FUN_00351fa0(lVar4,2,auStack_70);
  FUN_00367770(auStack_90,param_4);
  FUN_00351fa0(uVar5,3,auStack_90);
  return;
}


