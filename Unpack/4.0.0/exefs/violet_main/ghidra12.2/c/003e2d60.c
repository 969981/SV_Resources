/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003e2d60; name: FUN_003e2d60
 */


/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_003e2d60(long *******param_1,long *param_2,char *param_3,ulong *param_4,undefined4 param_5,
            undefined8 param_6,undefined4 param_7)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  ulong uVar8;
  long *******ppppppplVar9;
  long ******pppppplVar10;
  undefined8 local_68;
  char local_5c [4];
  char *local_58;
  long *******local_50;
  char *local_48;
  
  if (param_1 == (long *******)0x0) {
    return 0;
  }
  uVar8 = *param_4;
  local_58 = (char *)*param_2;
  uVar6 = (uint)uVar8;
  uVar5 = uVar6 & 0xc0;
  ppppppplVar9 = param_1;
  if ((uVar6 >> 0xc & 1) != 0) {
    ppppppplVar9 = (long *******)&local_50;
    local_50 = param_1;
  }
  local_48 = param_3;
  if ((uVar8 & 6) == 0) {
    if ((uVar6 >> 3 & 1) == 0) {
      uVar3 = FUN_003e1950(ppppppplVar9,&local_58,param_3,param_4[4],0xffffffff,0,param_5,param_6,
                           param_7);
      if ((int)uVar3 == -1) {
        return uVar3;
      }
      if ((int)uVar3 != 0) {
LAB_003e3050:
        *param_2 = (long)local_58;
        return 1;
      }
      uVar3 = 0x3a;
      uVar4 = 0x286;
    }
    else {
      uVar3 = FUN_003e1950(ppppppplVar9,&local_58,param_3,param_4[4],(int)param_4[1],uVar5,param_5,
                           param_6,param_7);
      if ((int)uVar3 == -1) {
        return uVar3;
      }
      if ((int)uVar3 != 0) goto LAB_003e3050;
      uVar3 = 0x3a;
      uVar4 = 0x27d;
    }
  }
  else {
    if ((uVar6 >> 3 & 1) == 0) {
      uVar5 = 0;
      uVar7 = 0x10;
      if ((uVar8 & 2) != 0) {
        uVar7 = 0x11;
      }
    }
    else {
      uVar7 = (undefined4)param_4[1];
    }
    uVar3 = FUN_003e2b30(&local_48,0,0,local_5c,0,&local_58,param_3,uVar7,uVar5,(char)param_5,
                         param_6);
    if ((int)uVar3 == -1) {
      return uVar3;
    }
    if ((int)uVar3 == 0) {
      uVar3 = 0x3a;
      uVar4 = 0x23c;
    }
    else {
      pppppplVar10 = *ppppppplVar9;
      if (pppppplVar10 == (long ******)0x0) {
        pppppplVar10 = (long ******)FUN_0047dcc0();
        *ppppppplVar9 = pppppplVar10;
      }
      else {
        iVar2 = FUN_0047e430(pppppplVar10);
        while (0 < iVar2) {
          local_68 = FUN_0047e380(pppppplVar10);
          FUN_003e47c0(&local_68,param_4[4]);
          iVar2 = FUN_0047e430(pppppplVar10);
        }
        pppppplVar10 = *ppppppplVar9;
      }
      pcVar1 = local_58;
      if (pppppplVar10 == (long ******)0x0) {
        uVar3 = 0x41;
        uVar4 = 0x24f;
      }
      else {
        while( true ) {
          local_58 = pcVar1;
          if ((long)local_48 < 1) {
            if (local_5c[0] == '\0') goto LAB_003e3050;
            uVar3 = 0x89;
            uVar4 = 0x274;
            goto LAB_003e2fdc;
          }
          if (((local_48 != (char *)0x1) && (*pcVar1 == '\0')) && (pcVar1[1] == '\0')) break;
          local_68 = 0;
          iVar2 = FUN_003e1950(&local_68,&local_58,local_48,param_4[4],0xffffffff,0,0,param_6,
                               param_7);
          if (iVar2 == 0) {
            uVar3 = 0x3a;
            uVar4 = 0x267;
            goto LAB_003e301c;
          }
          local_48 = pcVar1 + ((long)local_48 - (long)local_58);
          iVar2 = FUN_0047e2f0(*ppppppplVar9,local_68);
          pcVar1 = local_58;
          if (iVar2 == 0) {
            uVar3 = 0x41;
            uVar4 = 0x26e;
LAB_003e301c:
            FUN_004806c0(0xd,0x83,uVar3,"external/openssl/crypto/asn1/tasn_dec.c",uVar4);
            FUN_003e4550(local_68,param_4[4]);
            return 0;
          }
        }
        local_58 = pcVar1 + 2;
        if (local_5c[0] != '\0') goto LAB_003e3050;
        uVar3 = 0x9f;
        uVar4 = 0x25b;
      }
    }
  }
LAB_003e2fdc:
  FUN_004806c0(0xd,0x83,uVar3,"external/openssl/crypto/asn1/tasn_dec.c",uVar4);
  return 0;
}


