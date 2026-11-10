/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001ee1e8; name: FUN_001ee1e8
 */


void FUN_001ee1e8(long param_1)

{
  void *__s;
  long lVar1;
  byte bVar2;
  uint uVar3;
  
  bVar2 = *(byte *)(param_1 + 0x1ac);
  __s = (void *)(param_1 + 0x1a0);
  lVar1 = param_1 + 0x890;
  switch(bVar2) {
  case 0:
    break;
  case 1:
    FUN_001f470c(__s,lVar1);
    break;
  case 2:
    FUN_001f4758(__s);
    break;
  case 3:
    FUN_001f477c(__s);
    break;
  case 4:
    FUN_001f47a8(__s,lVar1);
    FUN_001f45b0(lVar1,*(undefined8 *)(param_1 + 0x200));
    *(undefined8 *)(param_1 + 0x200) = 0;
    *(undefined8 *)(param_1 + 0x260) = 0;
    *(undefined8 *)(param_1 + 0x268) = 0;
    break;
  case 5:
    FUN_001f47b8(__s,lVar1);
    break;
  case 6:
    FUN_001f47fc(__s);
    break;
  case 7:
    FUN_001f4828(__s,lVar1);
    break;
  case 8:
    FUN_001f4860(__s);
    break;
  default:
    uVar3 = (uint)bVar2;
    if ((*(byte *)(param_1 + (ulong)(bVar2 >> 3) + 0x9ad) >> (ulong)(uVar3 & 7) & 1) == 0) {
      if (uVar3 == 0xc) {
        if ((*(byte *)(param_1 + 0x9a4) >> 1 & 1) != 0) {
          FUN_001f48c0(__s,lVar1);
        }
      }
      else if ((uVar3 == 10) && ((*(byte *)(param_1 + 0x9a4) & 1) != 0)) {
        FUN_001f48a4(__s,lVar1);
      }
    }
    else {
      FUN_001f48a0(__s);
    }
  }
  memset(__s,0,0x60);
  *(undefined4 *)(param_1 + 0x280) = 2;
  FUN_001f40c4(param_1 + 0x208,param_1 + 0x284,9);
  *(long *)(param_1 + 0x228) = *(long *)(param_1 + 0x228) + 9;
  FUN_001f4080(param_1 + 0x230,lVar1);
  FUN_001f40c4(param_1 + 0x230,0,0);
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  return;
}


