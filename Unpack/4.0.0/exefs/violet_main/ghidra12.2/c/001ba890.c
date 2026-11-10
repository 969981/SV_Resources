/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001ba890; name: FUN_001ba890
 */


void FUN_001ba890(long param_1,undefined4 *param_2)

{
  long lVar1;
  long lVar2;
  
  FUN_001843f0(param_1 + 0xcc0c,param_2 + 0x1803,0x100,0xc,0xff);
  if (1 < *(int *)(param_1 + 0xcc08)) {
    FUN_001843f0(param_1 + 0xd00c,param_2 + 0x1903,0x100,0,0xff);
  }
  FUN_001843f0(param_1 + 0xc408,param_2 + 0x1a03,0x100,6,0xff);
  FUN_001843f0(param_1 + 0xc808,param_2 + 0x1b03,0x100,2,0xff);
  if (*(char *)(param_1 + 0xc404) == '\0') {
    param_2[0x1801] = 0;
    lVar1 = param_1 + 0xa004;
    lVar2 = 0x4004;
  }
  else {
    param_2[0x1801] = 7;
    FUN_001843f0(param_1 + 0xa404,param_2 + 0x1001,0x100,6,0xff);
    FUN_001843f0(param_1 + 0xa804,param_2 + 0x1101,0x100,6,0xff);
    FUN_001843f0(param_1 + 0xac04,param_2 + 0x1201,0x100,6,0xff);
    FUN_001843f0(param_1 + 0xb004,param_2 + 0x1301,0x100,6,0xff);
    FUN_001843f0(param_1 + 0xb404,param_2 + 0x1401,0x100,6,0xff);
    FUN_001843f0(param_1 + 0xb804,param_2 + 0x1501,0x100,6,0xff);
    FUN_001843f0(param_1 + 0xbc04,param_2 + 0x1601,0x100,6,0xff);
    lVar1 = param_1 + 0xc004;
    lVar2 = 0x5c04;
  }
  FUN_001843f0(lVar1,(long)param_2 + lVar2,0x100,6,0xff);
  switch(*param_2) {
  case 0:
    param_1 = param_1 + 0x9c04;
    goto LAB_001baab8;
  case 1:
    param_1 = param_1 + 4;
LAB_001baab8:
    param_2 = param_2 + 1;
    break;
  case 2:
    FUN_001843f0(param_1 + 0x404,param_2 + 1,0x100,0,0xff);
    param_1 = param_1 + 0x804;
    param_2 = param_2 + 0x101;
    break;
  case 3:
    FUN_001843f0(param_1 + 0x4c04,param_2 + 1,0x100,0,0xff);
    FUN_001843f0(param_1 + 0x5004,param_2 + 0x101,0x100,0,0xff);
    FUN_001843f0(param_1 + 0x5404,param_2 + 0x201,0x100,0,0xff);
    param_1 = param_1 + 0x5804;
    param_2 = param_2 + 0x301;
    break;
  case 4:
    FUN_001843f0(param_1 + 0xc04,param_2 + 1,0x100,0,0xff);
    FUN_001843f0(param_1 + 0x1004,param_2 + 0x101,0x100,0,0xff);
    FUN_001843f0(param_1 + 0x1404,param_2 + 0x201,0x100,0,0xff);
    FUN_001843f0(param_1 + 0x1804,param_2 + 0x301,0x100,0,0xff);
    FUN_001843f0(param_1 + 0x1c04,param_2 + 0x401,0x100,0,0xff);
    FUN_001843f0(param_1 + 0x2004,param_2 + 0x501,0x100,0,0xff);
    FUN_001843f0(param_1 + 0x2404,param_2 + 0x601,0x100,0,0xff);
    FUN_001843f0(param_1 + 0x2804,param_2 + 0x701,0x100,0,0xff);
    FUN_001843f0(param_1 + 0x2c04,param_2 + 0x801,0x100,0,0xff);
    FUN_001843f0(param_1 + 0x3004,param_2 + 0x901,0x100,0,0xff);
    FUN_001843f0(param_1 + 0x3404,param_2 + 0xa01,0x100,0,0xff);
    FUN_001843f0(param_1 + 0x3804,param_2 + 0xb01,0x100,0,0xff);
    FUN_001843f0(param_1 + 0x3c04,param_2 + 0xc01,0x100,0,0xff);
    FUN_001843f0(param_1 + 0x4004,param_2 + 0xd01,0x100,0,0xff);
    FUN_001843f0(param_1 + 0x4404,param_2 + 0xe01,0x100,0,0xff);
    param_1 = param_1 + 0x4804;
    param_2 = param_2 + 0xf01;
    break;
  case 5:
    FUN_001843f0(param_1 + 0x5c04,param_2 + 1,0x100,0,0xff);
    FUN_001843f0(param_1 + 0x6004,param_2 + 0x101,0x100,0,0xff);
    FUN_001843f0(param_1 + 0x6404,param_2 + 0x201,0x100,0,0xff);
    FUN_001843f0(param_1 + 0x6804,param_2 + 0x301,0x100,0,0xff);
    FUN_001843f0(param_1 + 0x6c04,param_2 + 0x401,0x100,0,0xff);
    FUN_001843f0(param_1 + 0x7004,param_2 + 0x501,0x100,0,0xff);
    FUN_001843f0(param_1 + 0x7404,param_2 + 0x601,0x100,0,0xff);
    FUN_001843f0(param_1 + 0x7804,param_2 + 0x701,0x100,0,0xff);
    FUN_001843f0(param_1 + 0x7c04,param_2 + 0x801,0x100,0,0xff);
    FUN_001843f0(param_1 + 0x8004,param_2 + 0x901,0x100,0,0xff);
    FUN_001843f0(param_1 + 0x8404,param_2 + 0xa01,0x100,0,0xff);
    FUN_001843f0(param_1 + 0x8804,param_2 + 0xb01,0x100,0,0xff);
    FUN_001843f0(param_1 + 0x8c04,param_2 + 0xc01,0x100,0,0xff);
    FUN_001843f0(param_1 + 0x9004,param_2 + 0xd01,0x100,0,0xff);
    FUN_001843f0(param_1 + 0x9404,param_2 + 0xe01,0x100,0,0xff);
    param_1 = param_1 + 0x9804;
    param_2 = param_2 + 0xf01;
    break;
  default:
    return;
  }
  FUN_001843f0(param_1,param_2,0x100,0,0xff);
  return;
}


