/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005f2f0c; name: FUN_005f2f0c
 */


void FUN_005f2f0c(undefined8 *param_1,byte *param_2,int *param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  int iVar13;
  ulong uVar14;
  undefined8 *puVar15;
  uint uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  addrinfo *paVar19;
  uint *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long local_1428;
  undefined8 uStack_1420;
  long local_1418;
  undefined8 uStack_1410;
  uint local_1408;
  uint local_1404 [623];
  undefined8 local_a48;
  undefined8 uStack_a40;
  addrinfo *local_a38;
  undefined8 *local_a30;
  undefined8 *local_a28;
  undefined8 *puStack_a20;
  long *local_a18;
  
  local_a38 = (addrinfo *)0x0;
  local_1428 = *(long *)PTR_DAT_047ce6f8;
  uStack_1420 = *(undefined8 *)PTR_DAT_047ce700;
  local_1418 = local_1428 * 1000000;
  uStack_1410 = 0x4000000000000000;
  FUN_0025320c(&local_a30);
  local_1408 = FUN_00253290(&local_a30);
  lVar11 = -0x26e;
  iVar13 = 1;
  puVar20 = local_1404 + 1;
  uVar16 = local_1408;
  while( true ) {
    iVar8 = (int)lVar11;
    uVar16 = iVar8 + (uVar16 ^ uVar16 >> 0x1e) * 0x6c078965 + 0x26f;
    puVar20[-1] = uVar16;
    if (lVar11 == 0) break;
    iVar1 = iVar13 + 1;
    iVar13 = iVar13 + 2;
    iVar6 = (uVar16 ^ uVar16 >> 0x1e) * 0x6c078965;
    lVar11 = lVar11 + 2;
    uVar16 = iVar6 + iVar1;
    *puVar20 = iVar8 + iVar6 + 0x270;
    puVar20 = puVar20 + 2;
  }
  uStack_a40 = 0;
  local_a48 = 0;
  iVar13 = 2;
  while( true ) {
    pbVar4 = param_2 + 1;
    if ((*param_2 & 1) != 0) {
      pbVar4 = *(byte **)(param_2 + 0x10);
    }
    pbVar5 = param_2 + 0x21;
    if ((param_2[0x20] & 1) != 0) {
      pbVar5 = *(byte **)(param_2 + 0x30);
    }
    iVar8 = nn::socket::GetAddrInfo
                      ((char *)pbVar4,(char *)pbVar5,(addrinfo *)(param_2 + 0x40),&local_a38);
    *param_3 = iVar8;
    if (iVar8 != 2 && iVar8 != 0xb) break;
    if (iVar13 == 0) goto LAB_005f31a8;
    lVar11 = FUN_002544fc(&local_1428);
    if (0 < lVar11) {
      local_a30 = (undefined8 *)(lVar11 * 1000000);
      if (0x8637bd05af6 < lVar11) {
        local_a30 = (undefined8 *)0x7fffffffffffffff;
      }
                    /* try { // try from 005f306c to 005f3073 has its CatchHandler @ 005f3248 */
      std::this_thread::sleep_for((duration *)&local_a30);
    }
    iVar13 = iVar13 + -1;
  }
  if (iVar8 == 0) {
    local_a28 = (undefined8 *)0x0;
    local_a30 = (undefined8 *)0x0;
    puStack_a20 = (undefined8 *)0x0;
    local_a18 = (long *)FUN_01cf7e20();
    if (local_a38 == (addrinfo *)0x0) {
      paVar19 = (addrinfo *)0x0;
LAB_005f31c8:
      nn::socket::FreeAddrInfo(paVar19);
      param_1[3] = local_a18;
      *param_1 = local_a30;
      param_1[2] = puStack_a20;
      param_1[1] = local_a28;
      return;
    }
    puVar12 = (undefined8 *)0x0;
    puVar18 = (undefined8 *)0x0;
    paVar19 = local_a38;
    do {
      lVar11 = (long)puVar18 - (long)local_a30 >> 5;
      uVar2 = lVar11 + 1;
      if (uVar2 >> 0x3b != 0) {
                    /* try { // try from 005f320c to 005f3213 has its CatchHandler @ 005f3214 */
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      uVar14 = (long)puVar12 - (long)local_a30 >> 4;
      if (uVar2 <= uVar14) {
        uVar2 = uVar14;
      }
      if (0x3fffffffffffffe < (ulong)((long)puVar12 - (long)local_a30 >> 5)) {
        uVar2 = 0x7ffffffffffffff;
      }
      if (uVar2 == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = (**(code **)(*local_a18 + 0x10))(local_a18,uVar2 << 5,0x10);
      }
      puVar18 = (undefined8 *)(lVar9 + lVar11 * 0x20);
      puVar3 = (undefined8 *)(lVar9 + uVar2 * 0x20);
      memcpy(puVar18,*(void **)(paVar19 + 0x20),(ulong)*(uint *)(paVar19 + 0x10));
      puVar7 = local_a30;
      puVar12 = puVar18 + 4;
      puVar17 = puVar18;
      if (local_a28 != local_a30) {
        do {
          puVar15 = local_a28 + -4;
          uVar10 = *puVar15;
          uVar22 = local_a28[-1];
          uVar21 = local_a28[-2];
          puVar18 = puVar17 + -4;
          puVar17[-3] = local_a28[-3];
          *puVar18 = uVar10;
          puVar17[-1] = uVar22;
          puVar17[-2] = uVar21;
          local_a28 = puVar15;
          puVar17 = puVar18;
        } while (local_a30 != puVar15);
      }
      local_a28 = puVar12;
      if (local_a30 != (undefined8 *)0x0) {
        lVar11 = (long)puStack_a20 - (long)local_a30;
        local_a30 = puVar18;
        puStack_a20 = puVar3;
        (**(code **)(*local_a18 + 0x18))(local_a18,puVar7,lVar11,0x10);
        puVar18 = local_a30;
        puVar3 = puStack_a20;
      }
      while( true ) {
        puStack_a20 = puVar3;
        local_a30 = puVar18;
        puVar3 = local_a28;
        paVar19 = *(addrinfo **)(paVar19 + 0x28);
        if (paVar19 == (addrinfo *)0x0) {
          paVar19 = local_a38;
          goto LAB_005f31c8;
        }
        puVar12 = puStack_a20;
        puVar18 = local_a28;
        if (puStack_a20 <= local_a28) break;
        memcpy(local_a28,*(void **)(paVar19 + 0x20),(ulong)*(uint *)(paVar19 + 0x10));
        puVar18 = local_a30;
        local_a28 = puVar3 + 4;
        puVar3 = puStack_a20;
      }
    } while( true );
  }
LAB_005f31a8:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar10 = FUN_01cf7e20();
  param_1[3] = uVar10;
  return;
}


