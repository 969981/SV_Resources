/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00314c10; name: FUN_00314c10
 */


ulong FUN_00314c10(long param_1,long param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  byte local_88 [16];
  ulong local_78;
  undefined1 auStack_70 [32];
  ulong local_50;
  undefined *puStack_48;
  
  uVar7 = (ulong)(uint)(*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xc4));
  uVar9 = param_3 - param_2;
  if (uVar9 < uVar7) {
    uVar7 = FUN_00314f90(param_1,param_2,param_3);
    if (uVar7 == 0) {
      if (~*(uint *)(param_1 + 0xc4) < uVar9) goto LAB_00314f60;
      uVar7 = 0;
      *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0xc4) + (int)uVar9;
      UNRECOVERED_JUMPTABLE = FUN_00314c10;
      goto LAB_00314cb8;
    }
LAB_00314c8c:
    uVar9 = *(ulong *)(param_1 + 0x10);
  }
  else {
    lVar1 = param_2 + uVar7;
    uVar7 = FUN_00314f90(param_1,param_2,lVar1);
    if (uVar7 != 0) goto LAB_00314c8c;
    cVar4 = *(char *)(param_1 + 0xca);
    lVar10 = *(long *)(param_1 + 0x38);
    if (cVar4 == '\x05') {
      uVar2 = *(uint *)(param_1 + 0xd0);
      if ((int)((ulong)uVar2 & 0xff) == 0) {
        uVar3 = *(uint *)(lVar10 + 0x30);
        uVar7 = (ulong)uVar3;
        if ((ulong)*(uint *)(lVar10 + 0x34) < uVar7 + 2) {
          if (0xfffffffd < uVar3) goto LAB_00314f60;
          *(int *)(lVar10 + 0x34) = (int)(uVar7 + 2);
          lVar5 = FUN_0038c7f0(*(undefined8 *)(lVar10 + 0x28));
          uVar7 = (ulong)*(uint *)(lVar10 + 0x30);
          *(long *)(lVar10 + 0x28) = lVar5;
        }
        else {
          lVar5 = *(long *)(lVar10 + 0x28);
        }
        *(undefined1 *)(lVar5 + uVar7) = (char)(uVar2 >> 0x10);
        ((undefined1 *)(lVar5 + uVar7))[1] = (char)(uVar2 >> 8);
        uVar2 = *(uint *)(lVar10 + 0x30);
        if (0xfffffffd < uVar2) goto LAB_00314f60;
        iVar6 = uVar2 + 2;
LAB_00314f24:
        *(int *)(lVar10 + 0x30) = iVar6;
LAB_00314f28:
        puVar8 = *(undefined8 **)(param_1 + 0x20);
        *(undefined8 **)(param_1 + 0x20) = puVar8 + 1;
        UNRECOVERED_JUMPTABLE = (code *)*puVar8;
        *(code **)(param_1 + 0x18) = UNRECOVERED_JUMPTABLE;
                    /* WARNING: Could not recover jumptable at 0x00314f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar7 = (*UNRECOVERED_JUMPTABLE)(param_1,lVar1,param_3);
        return uVar7;
      }
      puStack_48 = PTR_FUN_047cc7b0;
      local_50 = (ulong)uVar2 & 0xff;
      FUN_00391b20(local_88,"trailing bits in base64 encoding: 0x%02x",0x28,&local_50,1);
      uVar7 = (ulong)local_88 | 1;
      if ((local_88[0] & 1) != 0) {
        uVar7 = local_78;
      }
                    /* try { // try from 00314df0 to 00314e13 has its CatchHandler @ 00314f64 */
      FUN_00367770(auStack_70,uVar7);
      uVar7 = FUN_00351340("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                           ,0x57d,auStack_70,0,0);
LAB_00314e14:
      if ((local_88[0] & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_78);
      }
      if (uVar7 == 0) {
LAB_00314f60:
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    else {
      if (cVar4 == '\x04') {
        uVar2 = *(uint *)(param_1 + 0xd0);
        uVar7 = (ulong)uVar2 & 0xffff;
        if ((int)uVar7 == 0) {
          uVar3 = *(uint *)(lVar10 + 0x30);
          if (uVar3 < *(uint *)(lVar10 + 0x34)) {
            lVar5 = *(long *)(lVar10 + 0x28);
          }
          else {
            if (uVar3 == 0xffffffff) goto LAB_00314f60;
            *(uint *)(lVar10 + 0x34) = uVar3 + 1;
            lVar5 = FUN_0038c7f0(*(undefined8 *)(lVar10 + 0x28));
            uVar3 = *(uint *)(lVar10 + 0x30);
            *(long *)(lVar10 + 0x28) = lVar5;
          }
          *(char *)(lVar5 + (ulong)uVar3) = (char)(uVar2 >> 0x10);
          uVar2 = *(uint *)(lVar10 + 0x30);
          if (uVar2 == 0xffffffff) goto LAB_00314f60;
          iVar6 = uVar2 + 1;
          goto LAB_00314f24;
        }
        puStack_48 = PTR_FUN_047cc7b0;
        local_50 = uVar7;
        FUN_00391b20(local_88,"trailing bits in base64 encoding: 0x%04x",0x28,&local_50,1);
        uVar7 = (ulong)local_88 | 1;
        if ((local_88[0] & 1) != 0) {
          uVar7 = local_78;
        }
                    /* try { // try from 00314d7c to 00314d9f has its CatchHandler @ 00314f68 */
        FUN_00367770(auStack_70,uVar7);
        uVar7 = FUN_00351340("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                             ,0x571,auStack_70,0,0);
        goto LAB_00314e14;
      }
      if (cVar4 != '\x03') goto LAB_00314f28;
      FUN_003673f0(auStack_70,"illegal base64 encoding");
      uVar7 = FUN_00351340("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                           ,0x56a,auStack_70,0,0);
      if (uVar7 == 0) goto LAB_00314f60;
    }
    uVar9 = *(ulong *)(param_1 + 0x10);
    if (uVar9 == 0) {
      uVar9 = uVar7;
      if (4 < uVar7) {
        uVar9 = FUN_00350fb0(uVar7);
      }
      *(ulong *)(param_1 + 0x10) = uVar9;
    }
    *(undefined1 **)(param_1 + 0x18) = &LAB_00314840;
  }
  if (uVar9 == 0) {
    uVar9 = uVar7;
    if (4 < uVar7) {
      uVar9 = FUN_00350fb0(uVar7);
    }
    *(ulong *)(param_1 + 0x10) = uVar9;
  }
  UNRECOVERED_JUMPTABLE = (code *)&LAB_00314840;
LAB_00314cb8:
  *(code **)(param_1 + 0x18) = UNRECOVERED_JUMPTABLE;
  return uVar7;
}


